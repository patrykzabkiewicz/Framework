/**
*
* Implementation of List container
*
*/

namespace dfrm {

template <typename T>
struct elem {
	T obj;
	elem<T> *next;
	elem<T> *prev;
	elem() {
		this->next = this->prev = NULL;
	}
};


template <typename T>
struct list {
	int size;
	elem<T> *first;
	elem<T> *last;

	list() {
		this->first = this->last = NULL;
		this->size = 0;
	}
	~list() {}
};


template <typename T>
T pop_front(list<T> *l) {
	if(l->size > 0) {
		elem<T> tmp = *l->first;
		delete l->first;
		l->first = tmp.next;
		l->size--;
		return tmp.obj;
	} else return 0;
}

template <typename T>
void push_front(list<T> *l, T nobj) {
	elem<T> *new_node = new elem<T>();
	new_node->obj = nobj;
	
	if(l->size == 0)
		l->last = new_node;

	if(l->size > 0)
		l->first->prev = new_node;
	
	new_node->next = l->first;
	l->first = new_node;
	l->size++;
}

template <typename T>
void push_front(list<T> *l, T *nobj) {
	elem<T> *new_node = new elem<T>();
	new_node->obj = *nobj;
	
	if(l->size == 0)
		l->last = new_node;

	if(l->size > 0)
		l->first->prev = new_node;
	
	new_node->next = l->first;
	l->first = new_node;
	l->size++;
}


template <typename T>
T pop_back(list<T> *l) {
	if(l->size > 0) {
		elem<T> tmp = *l->last;
		delete l->last;
		l->last = tmp.prev;
		l->size--;
		return tmp.obj;
	} else return 0;
}

template <typename T>
void push_back(list<T> *l, T obj) {
	elem<T> *new_node = new elem<T>();
	new_node->obj = obj;
	
	if(l->size == 0)
		l->first = new_node;

	if(l->size > 0)
		l->last->next = new_node;

	new_node->prev = l->last;	
	l->last = new_node;
	l->size++;
}


template <typename T>
void push_back(list<T> *l, T *obj) {
	elem<T> *new_node = new elem<T>();
	new_node->obj = *obj;
	
	if(l->size == 0)
		l->first = new_node;

	if(l->size > 0)
		l->last->next = new_node;

	new_node->prev = l->last;	
	l->last = new_node;
	l->size++;
}


}
