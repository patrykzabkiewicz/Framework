
template <typename T>
struct dequeue {
	T obj;
	T* prev;
	T* next;

	dequeue() {}
	T pop_back() {}
	void push_back() {}
	T pop_front() {}
	void push_front() {}
}
