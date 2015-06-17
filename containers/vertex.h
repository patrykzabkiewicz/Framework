/**
 *
 * Implementation of the vertex
 *
 * Autor: Patryk Zabkiewicz
 *
*/


template <typename T>
struct vertex {
	T data;
	list<vertex<T>> *next;
	
	vertex() {
		this->next = new list<vertex<T>>();
	}
	~vertex() {}
}


class vrtxTraffic : public vertex {
private:
	list<int> *hours;

public:
	vrtxTraffic();
	int getTraffic(int);
}

vrtxTraffic::vrtxTraffic() {
	this->hours = new list<int>();
}

int vrtxTraffic::getTraffic(int hour) {

}

