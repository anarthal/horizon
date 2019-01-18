/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2018 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla <sagunxp@gmail.com>
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "ReferenceTypeListTest"

#include "Core/Structures/LinkedList/ReferenceList/Reference.hpp"
#include "Core/Structures/LinkedList/ReferenceList/RefManager.hpp"
#include "Core/Structures/TypeList.hpp"

#include <boost/test/unit_test.hpp>
#include <cstring>
#include <iostream>
#include <cassert>

template <class OBJECT>
class TestReference;

template <class OBJECT>
class TestRefManager : public Horizon::Structures::LinkedList::RefManager<TestRefManager<OBJECT>, OBJECT>
{
public:
	typedef Horizon::Structures::LinkedList::Head::Iterator<TestReference<OBJECT>> iterator;

	TestReference<OBJECT> *first()
	{
		return static_cast<TestReference<OBJECT> *> (Horizon::Structures::LinkedList::RefManager<TestRefManager<OBJECT>, OBJECT>::first());
	}
	TestReference<OBJECT> const *first() const
	{
		return static_cast<TestReference<OBJECT> const *> (Horizon::Structures::LinkedList::RefManager<TestRefManager<OBJECT>, OBJECT>::first());
	}

	iterator begin() { return iterator(first()); }
};

template <class OBJECT>
class TestReference : public Horizon::Structures::LinkedList::Reference<TestRefManager<OBJECT>, OBJECT>
{
public:
    TestReference() : Horizon::Structures::LinkedList::Reference<TestRefManager<OBJECT>, OBJECT>()
    {
    	//
    }
    ~TestReference() override { this->remove(); }
    TestReference *next()
    {
    	return (TestReference *) Horizon::Structures::LinkedList::Reference<TestRefManager<OBJECT>, OBJECT>::next();
    }

protected:
    void target_object_build_link() override
    {
        // called from link()
        this->target()->push_front(this);
        this->target()->inc_size();
    }
    void target_object_destroy_link() override
    {
        // called from erase()
        if (this->is_valid())
        	this->target()->dec_size();
    }
    void source_object_destroy_link() override
    {
        // called from invalidate()
        this->target()->dec_size();
    }
};

template<class T>
class TestObject
{
public:
	virtual ~TestObject() { }

    bool is_valid() const { return _ref.is_valid(); }
    void add_reference(TestRefManager<T> &m) { assert(!is_valid()); _ref.link(&m, (T*) this); }
    void remove_reference() { assert(is_valid()); _ref.remove(); }

	TestReference<T> &get_reference() { return _ref; }

private:
	TestReference<T> _ref;
};

class GenericTestObject
{
public:
	GenericTestObject(int id, char type) : _id(id), _type(type) { }

	virtual int get_id() { return _id; }
	virtual void set_id(int id) { _id = id; }

	char get_type() { return _type; }

private:
	int _id;
	char _type;
};

/*============================*
 * Subjects
 *============================*/
class A : public TestObject<A>, public GenericTestObject
{
public:
	A(int id = 0) : GenericTestObject(id, 'A') { }
};

class B : public TestObject<B>, public GenericTestObject
{
public:
	B(int id = 0) : GenericTestObject(id, 'B') { }
};

class C : public TestObject<C>, public GenericTestObject
{
public:
	C(int id = 0) : GenericTestObject(id, 'C') { }
};

/*============================*
 * Container Data Type
 *============================*/
template<class OBJECT>
struct ContainerMapList
{
	TestRefManager<OBJECT> _element;
};

template<>
struct ContainerMapList<TypeNull>
{
};

template<class HEAD, class TAIL>
struct ContainerMapList<TypeList<HEAD, TAIL>>
{
	ContainerMapList<HEAD> _elements;
	ContainerMapList<TAIL> _tail_elements;
};

/*============================*
 * TypeListIterator Insert Functions
 *============================*/
// non-const insert functions
namespace TypeListIterator
{
template<class SPECIFIC_TYPE>
SPECIFIC_TYPE *Insert(ContainerMapList<SPECIFIC_TYPE> &elements, SPECIFIC_TYPE *obj)
{
	//elements._element[hdl] = obj;
	obj->add_reference(elements._element);
	return obj;
}
template<class SPECIFIC_TYPE>
SPECIFIC_TYPE *Insert(ContainerMapList<TypeNull> &/*elements*/, SPECIFIC_TYPE */*obj*/)
{
	return nullptr;
}
// this is a missed
template<class SPECIFIC_TYPE, class T>
SPECIFIC_TYPE *Insert(ContainerMapList<T> &/*elements*/, SPECIFIC_TYPE */*obj*/)
{
	return nullptr;                                        // a missed
}
// Recursion
template<class SPECIFIC_TYPE, class HEAD, class TAIL>
SPECIFIC_TYPE* Insert(ContainerMapList<TypeList<HEAD, TAIL>> &elements, SPECIFIC_TYPE* obj)
{
	SPECIFIC_TYPE *t = Insert(elements._elements, obj);
	return (t != nullptr ? t : Insert(elements._tail_elements, obj));
}
/*============================*
 * TypeListIterator Count Functions
 *============================*/
// count functions
	template <class SPECIFIC_TYPE>
	size_t count(ContainerMapList<SPECIFIC_TYPE> const &elements, SPECIFIC_TYPE */*fake*/)
	{
		return elements._element.get_size();
	}
	template <class SPECIFIC_TYPE>
	size_t count(ContainerMapList<TypeNull> const &/*elements*/, SPECIFIC_TYPE */*fake*/)
	{
		return 0;
	}
	template <class SPECIFIC_TYPE, class T>
	size_t count(ContainerMapList<T> const &/*elements*/, SPECIFIC_TYPE */*fake*/)
	{
		return 0;
	}
	template <class SPECIFIC_TYPE, class T>
	size_t count(ContainerMapList<TypeList<SPECIFIC_TYPE, T>> const &elements, SPECIFIC_TYPE *fake)
	{
		return count(elements._elements, fake);
	}
	template <class SPECIFIC_TYPE, class H, class T>
	size_t count(ContainerMapList<TypeList<H, T>> const &elements, SPECIFIC_TYPE *fake)
	{
		return count(elements._tail_elements, fake);
	}
}
/*============================*
 * TypeRefContainer
 *============================*/
template<class OBJECT_TYPES>
class TypeRefContainer
{
public:
	template <class SPECIFIC_TYPE>
	size_t count() const
	{
		return TypeListIterator::count(_elements, (SPECIFIC_TYPE *) NULL);
	}

	/// inserts a specific object into the container
	template <class SPECIFIC_TYPE>
	bool insert(SPECIFIC_TYPE *obj)
	{
		assert(!obj->is_valid());
		SPECIFIC_TYPE* t = TypeListIterator::Insert(_elements, obj);
		return (t != NULL);
	}

	ContainerMapList<OBJECT_TYPES> &get_elements(void) { return _elements; }
	const ContainerMapList<OBJECT_TYPES> &get_elements(void) const { return _elements;}

private:
	ContainerMapList<OBJECT_TYPES> _elements;
};

/*============================*
 * Visitor Helper Functions
 *============================*/
template<class VISITOR, class TYPE_CONTAINER>
void VisitorHelper(VISITOR &v, TYPE_CONTAINER &c)
{
	v.Visit(c);
}

template<class VISITOR>
void VisitorHelper(VISITOR &/*v*/, ContainerMapList<TypeNull> &/*c*/)
{
	// terminate condition container map list
}

template<class VISITOR, class T>
void VisitorHelper(VISITOR &v, ContainerMapList<T> &c)
{
	v.Visit(c._element);
}

// recursion container map list
template<class VISITOR, class H, class T>
void VisitorHelper(VISITOR &v, ContainerMapList<TypeList<H, T>> &c)
{
	VisitorHelper(v, c._elements);
	VisitorHelper(v, c._tail_elements);
}

// for TypeRefContainer
template<class VISITOR, class OBJECT_TYPES>
void VisitorHelper(VISITOR &v, TypeRefContainer<OBJECT_TYPES> &c)
{
	VisitorHelper(v, c.get_elements());
}

/*============================*
 * TypeContainerVisitor
 *============================*/
template<class TYPE_CONTAINER, class VISITOR>
class TypeContainerVisitor
{
public:
	TypeContainerVisitor(VISITOR &v) : _visitor(v) { }

	void Visit(TYPE_CONTAINER &c)
	{
		VisitorHelper(_visitor, c);
	}

	void Visit(const TYPE_CONTAINER &c) const
	{
		VisitorHelper(_visitor, c);
	}

private:
	VISITOR &_visitor;
};

/*============================*
 * Defines
 *============================*/
typedef TYPELIST_3(A, B, C) MyTypes;

#define MAX_A_TYPES 3
#define MAX_B_TYPES 6
#define MAX_C_TYPES 9

void print_count(TypeRefContainer<MyTypes> &refContainer)
{
	std::cout << "A: " << refContainer.count<A>()
	<< " | B: " << refContainer.count<B>()
	<< " | C: " << refContainer.count<C>() << std::endl;
}

/*============================*
 * Checkers
 *============================*/
class CompareGenericTestObjectID
{
public:
	CompareGenericTestObjectID(int id)
	: _id(id) { }

	bool operator()(GenericTestObject *obj)
	{
		if (obj->get_id() == _id) {
			return true;
		}
		return false;
	}

private:
	int _id;
};

/*============================*
 * Searchers
 *============================*/
template<class PREDICATE>
struct GenericTestObjectSearcher
{
	GenericTestObject *&_object;
	PREDICATE &_check;

	GenericTestObjectSearcher(GenericTestObject *&result, PREDICATE &check)
	: _object(result), _check(check) { }

	template <class T>
	inline void perform_on(TestRefManager<T> &m)
	{
		if (_object != nullptr)
			return;

		for (typename TestRefManager<T>::iterator it = m.begin(); it != typename TestRefManager<T>::iterator(nullptr); it++)
			if (_check(it->source())) {
				_object = it->source();
				break;
			}
	}

	void Visit(TestRefManager<A> &m) { perform_on<A>(m); }
	void Visit(TestRefManager<B> &m) { perform_on<B>(m); }
	void Visit(TestRefManager<C> &m) { perform_on<C>(m); }

	template<class NOT_INTERESTED>
	void Visit(TestRefManager<NOT_INTERESTED> &) { }
};

/*============================*
 * Main
 *============================*/
BOOST_AUTO_TEST_CASE(ReferenceTypeListTest)
{
	TypeRefContainer<MyTypes> refContainer;

	A *a[MAX_A_TYPES];
	B *b[MAX_B_TYPES];
	C *c[MAX_C_TYPES];

	print_count(refContainer);

	int aids[] = { 11, 21, 36 };
	for (int i = 0; i < MAX_A_TYPES; i++) {
		a[i] = new A(aids[i]);
		refContainer.template insert<A>(a[i]);
		assert(a[i]->is_valid());
	}

	BOOST_CHECK_EQUAL(refContainer.count<A>(), MAX_A_TYPES);
	BOOST_CHECK_EQUAL(refContainer.count<B>(), 0);
	BOOST_CHECK_EQUAL(refContainer.count<C>(), 0);

	int bids[6] = { 12, 22, 37, 42, 51, 62 };
	for (int i = 0; i < MAX_B_TYPES; i++) {
		b[i] = new B(bids[i]);
		refContainer.template insert<B>(b[i]);
		assert(b[i]->is_valid());
	}
	BOOST_CHECK_EQUAL(refContainer.count<A>(), MAX_A_TYPES);
	BOOST_CHECK_EQUAL(refContainer.count<B>(), MAX_B_TYPES);
	BOOST_CHECK_EQUAL(refContainer.count<C>(), 0);

	int cids[9] = { 13, 23, 38, 43, 52, 63, 71, 87, 99 };
	for (int i = 0; i < MAX_C_TYPES; i++) {
		c[i] = new C(cids[i]);
		refContainer.template insert<C>(c[i]);
		assert(c[i]->is_valid());
	}

	BOOST_CHECK_EQUAL(refContainer.count<A>(), MAX_A_TYPES);
	BOOST_CHECK_EQUAL(refContainer.count<B>(), MAX_B_TYPES);
	BOOST_CHECK_EQUAL(refContainer.count<C>(), MAX_C_TYPES);

	print_count(refContainer);

	/**
	 * Searcher & Checker tests.
	 */
#define ID_CHECK 42
	GenericTestObject *res = nullptr;
	CompareGenericTestObjectID check(ID_CHECK);
	GenericTestObjectSearcher<CompareGenericTestObjectID> searcher(res, check);
	TypeContainerVisitor<TypeRefContainer<MyTypes>, GenericTestObjectSearcher<CompareGenericTestObjectID>>  id_searcher(searcher);
	id_searcher.Visit(refContainer);

	BOOST_CHECK_EQUAL(res->get_id(), ID_CHECK);

	printf("Found res of type %c id %d\n", res->get_type(), res->get_id());

	for (int i = 0; i < MAX_A_TYPES; i++) {
		a[i]->remove_reference();
		delete a[i];
	}
	for (int i = 0; i < MAX_B_TYPES; i++) {
		b[i]->remove_reference();
		delete b[i];
	}
	for (int i = 0; i < MAX_C_TYPES; i++) {
		c[i]->remove_reference();
		delete c[i];
	}
#undef ID_CHECK

	BOOST_CHECK_EQUAL(refContainer.count<A>(), 0);
	BOOST_CHECK_EQUAL(refContainer.count<B>(), 0);
	BOOST_CHECK_EQUAL(refContainer.count<C>(), 0);

	print_count(refContainer);
}
