/**
 *
 * Template reimplementation of the stack container
 * Fastest as possible
 *
 * Main operations are push and pop at the back
 * Author: Patryk Ząbkiewicz
 *
*/

namespace dfrm {

template <typename T>
struct elem {
	T 	obj;
	elem<T> *next;
}

template <typename T>
struct stack {	
	int size;
	elem<T> *current;
	elem<T> data;

	stack() {
		this->current = NULL;
		this->size = 0;
	}
	~stack() {
		//delete [] data;
	}
};

template <typename T>
T pop_back(stack<T> *s) {
	if(s->size > 0) {
		elem<T> tmp = *s->current;
		delete s->current;
		s->current = tmp.next;
		s->size--;
		return tmp.obj;
	} else return 0;
}

template <typename T>
void push_back(stack<T> *s, const T nobj) {
	elem<T> *tmp = new elem<T>();
	tmp->next = s->current;
	s->current = tmp;
	s->size++;
}

}
