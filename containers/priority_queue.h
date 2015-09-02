/**
 *
 * Priority queue implementation using templates
 * Author : Patryk Zabkiewicz
 *
*/

namespace dfrm {

template <typename T>
struct elem {
	T obj;
	elem<T> *next;

	elem() {
		this->next = NULL;
	}
	~elem() {}
};

	
template <typename T>
struct queue {
	int size;
	elem<T> *first;
	elem<T> *last;
	
	queue() {
		this->first = this->last = NULL;
		this->size = 0;
	}
	~queue() {
		elem<T> *tmp;
		while(this->first) {
		 	tmp = this->first->next;
			delete this->first;
			this->first = tmp;		
		}
		this->first = this->last = NULL;
	}
};

template <typename T>
void push(queue<T> *q, T obj) {
	elem<T> *new_node 	= new elem<T>();
	new_node->obj 		= obj;
	
	if(q->last != NULL)				// if queue is not empty
		q->last->next 	= new_node;	 	// current last has next element
	if(q->first == NULL)			 	// if queue is empty
		q->first 	= new_node;
	
	q->last 		= new_node; 		// move pointer to new node
	q->size++;
}

template <typename T>
T pop(queue<T> *q) {
	if(q->first) {
		elem<T> tmp = *q->first;
		delete q->first;
		q->size--;
		q->first = tmp.next;
		return tmp.obj;
	}
	q->first = q->last = NULL; 
	return 0;
}

};
