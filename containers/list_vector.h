/**
 *
 *
 *
 *
 *
 *
*/

#ifndef FIXED_VECT
#define FIXED_VECT 4
#endif


namespace dfrm {

template <typename T>
struct elem {
	T data[FIXED_VECT];
	elem<T> *next;
}

template <typename T> 
struct list_vect() {
	int capacity;
	int size;
	
	T *data;

	list_vect() {
		this->capacity = FIXED_VECT;
		this->data = new elem<T>();
	}

	~list_vect() {}
}

template <typename T>
void push_back(list_vect<T> *v, T elem) {
	v->size++;

	if(v->size == v->capacity) {
		v->capacity += FIXED_VECT;
	} else {
		v->data[v->size] = elem;
	}
}

template <typename T>
T pop_back() {}

}


