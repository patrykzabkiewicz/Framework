//
//  vector.h
//
//  Naive vector implentation in C
//
//  Created by Patryk Ząbkiewicz on 12.02.2015.
//
//

#define CHUNK 4

typedef struct _vect {
    
    // --- public values
    int size;
    
    // --- private values
    int _sizeoftype;
    int _capacity;
    
    // --- member functions
    int (*push_back)(struct _vect *, const void *);
    (void *) (*pop_back)(struct _vect *);
    
    // --- data
    void * v;

} vector;


// initialize vector
void init(vector *v, int sizeofelement) {
    v._capacity = CHUNK;
    v.size = 0;
    v._sizeoftype = sizeofelement;
    v.v = (void *) malloc(CHUNK * sizeofelement);
}

// push to capacity and expand if there is a need
int push_back(vector *v, const void &elem) {
    v.size++;
    if(v.size == v._capacity) {
        (void *) malloc( (v.size+4) * v._sizeoftype);
        v._capacity+CHUNK;
    }
    v.v[size] = *elem;
    return 0;
}

// deallocates memory from vector end
void * pop_back(vector *v) {
    return v.v[v.size-1];
}
