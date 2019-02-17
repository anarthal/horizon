/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#ifndef HORIZON_NETWORKING_ACCEPTSOCKETMGR_HPP
#define HORIZON_NETWORKING_ACCEPTSOCKETMGR_HPP

#include "Core/Networking/SocketMgr.hpp"
#include "Core/Multithreading/ThreadSafeQueue.hpp"

#include <mutex>

namespace Horizon
{
namespace Networking
{
class AsyncAcceptor;
/**
 * @brief Socket Manager for Accepted Sockets.
 *        Deals with client sockets that were accepted by the server.
 */
template <class SocketType>
class AcceptSocketMgr : public SocketMgr<SocketType>
{
	typedef std::map<uint32_t, std::shared_ptr<SocketType>> SocketMap;
	typedef SocketMgr<SocketType> BaseSocketMgr;
public:
	AcceptSocketMgr() { }
	~AcceptSocketMgr() { }

	/**
	 * @brief Initialize and start accepting connections asynchronously.
	 *        This method also starts the networking threads for accepted sockets.
	 * @param[in|out] &io_service  const reference to the IO_Service object.
	 * @param[in|out] &listen_ip   const reference to the ip_address string for the acceptor to bind on.
	 * @param[in]     port         port number for the acceptor to bind on.
	 * @param[in]     threads      number of network acceptor threads to start and run.
	 * @return true on success, false on failure.
	 */
	virtual bool start(boost::asio::io_service &io_service, std::string const &listen_ip, uint16_t port, uint32_t threads = 1)
	{
		try {
			_acceptor = std::make_unique<AsyncAcceptor>(io_service, listen_ip, port);
		} catch (boost::system::system_error const &error) {
			CoreLog->error("Exception caught in AcceptSocketMgr::Start ({}, {}) {}", listen_ip, port, error.what());
			return false;
		}

		if (!BaseSocketMgr::StartNetworkThreads(threads)) {
			CoreLog->error("AcceptSocketMgr failed to start network threads.");
			return false;
		}

		_acceptor->set_socket_factory(std::bind(&BaseSocketMgr::get_new_socket, this));
		_acceptor->async_accept_with_callback(std::bind(&AcceptSocketMgr<SocketType>::on_socket_open, this, std::placeholders::_1, std::placeholders::_2));

		CoreLog->info("Networking initialized, listening on {} {} (Maximum Threads: {})", listen_ip, port, threads);

		return true;
	}

	/**
	 * @brief Stop the Acceptor network and clear the client socket map.
	 * - Called from the main thread only.
	 */
	virtual void stop_network() override
	{
		if (_acceptor->is_open())
			_acceptor->close();

		BaseSocketMgr::stop_network();
		
		_socket_map.clear();
	}

	/**
	 * @brief On Socket Open / Start Event. Called as a callback from an Acceptor on successful socket acceptance.
	 *        Moves the socket ownership from the caller to a network thread.
	 * - Called from global I/O thread.
	 * @param[in]     socket         shared pointer.
	 * @param[in]     thread_index   index of the thread that the socket is being moved from.
	 */
	void on_socket_open(std::shared_ptr<tcp::socket> const &socket, uint32_t thread_index)
	{
		std::shared_ptr<SocketType> new_socket = BaseSocketMgr::on_socket_open(std::move(socket), thread_index);

		set_socket_for_management(new_socket);
	}

	/**
	 * @brief Sets a socket for removal on the next session update call.
	 * - Thread safe.
	 * @param[in] sock  socket to be removed.
	 */
	void set_socket_for_removal(std::weak_ptr<SocketType> sock)
	{
		_socket_management_queue.push(std::make_pair(false, sock.lock()));
	}

	void set_socket_for_management(std::shared_ptr<SocketType> sock)
	{
		_socket_management_queue.push(std::make_pair(true, sock));
	}

	/**
	 * @brief Updates every session in the socket map and removes ones in the removal queue.
	 * - Called from the main thread only.
	 * @param[in] diff
	 */
	void update_socket_sessions(uint32_t diff)
	{
		std::shared_ptr<std::pair<bool, std::shared_ptr<SocketType>>> sock_buf;

		while ((sock_buf = _socket_management_queue.try_pop())) {
			bool add = (*sock_buf).first;
			std::shared_ptr<SocketType> socket = (*sock_buf).second;

			auto socket_iter = _socket_map.find(socket->get_socket_id());

			if (socket_iter != _socket_map.end())
				_socket_map.erase(socket_iter);

			if (add)
				_socket_map.emplace(socket->get_socket_id(), socket);
		}

		for (auto sock : _socket_map) {
			if (sock.second->get_session() != nullptr) {
				sock.second->update_session(diff);
			}
		}
	}

	int16_t get_packet_length(uint16_t packet_id)
	{
		std::lock_guard<std::mutex> lock(_packet_len_db_mtx);

		try {
			return _packet_length_db.at(packet_id);
		} catch (std::out_of_range &e) {
			return 0;
		}
	}

	void add_packet_length(uint16_t packet_id, int16_t length)
	{
		std::lock_guard<std::mutex> lock(_packet_len_db_mtx);

		auto it = _packet_length_db.find(packet_id);
		
		if (it != _packet_length_db.end())
			_packet_length_db.erase(it);

		_packet_length_db.emplace(packet_id, length);
	}

private:
	std::unique_ptr<AsyncAcceptor> _acceptor;       ///< unique pointer to an AsyncAcceptor object.
	SocketMap _socket_map;                          ///< std::map of all connected and handled sockets.
	std::mutex _packet_len_db_mtx;
	ThreadSafeQueue<std::pair<bool, std::shared_ptr<SocketType>>> _socket_management_queue;
	std::map<uint16_t, int16_t> _packet_length_db;
};
}
}

#endif /* HORIZON_NETWORKING_ACCEPTSOCKETMGR_HPP */
