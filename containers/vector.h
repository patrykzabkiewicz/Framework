//
//	Author: Patrick Zabkiewicz
//  Date:   26.01.2015
//
//
//
//  Reimplementation of the vector
//
//


#ifndef VECTOR_H
#define VECTOR_H



template <class T>
class VECTOR {

private:
    int capacity;
    int size;
    T v[4];
    
public:
    
    int size() {
        return size;
    }
    
    int push_back() {
        if(capacity == size) {

            T *Tptr = newVector[size+4];
            memncpy(newVector, v , capacity);
            
            capacity=capacity+4;
            size++;
        }
        
    }
    
    int pop_back() {
        size--;
        
    }
    
    const =operator();
    const T []operator(const int index) const {
        
    }
    const []operator(T newValue) const;
    const ()operator() const;
}

typedef VECTOR vector;

#endif // VECTOR_H
