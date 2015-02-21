#import "vector.h"

// initialize vector
void init(vector *v, int sizeofelement) {
    v->_capacity = CHUNK;
    v->size = 0;
    v->_sizeoftype = sizeofelement;
    v->v = (void *) malloc(CHUNK * sizeofelement);
}

// push to capacity and expand if there is a need
int push_back(const void &elem, vector *v) {
    v->size++;
    if(v->size == v->_capacity) {
        (void *) malloc( (v->size+4) * v->_sizeoftype);
        v->_capacity+CHUNK;
    }
    v->v[v->size] = *elem;
    return 0;
}

// deallocates memory from vector end
void * pop_back(vector *v) {
    return v->v[v->size-1];
}
