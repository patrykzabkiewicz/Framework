/**
*
* This is simple implementation of linked list
*
* Author: Patryk Ząbkiewicz
*
*/

template <typename T>
struct forward_list {
	T obj;
	T *prev;
	
	T pop_back() {
		T tmp = this->obj;
		this->
		return tmp;
	}
	void push_back(T &nobj) {
		this->next = nobj;
	}
}

