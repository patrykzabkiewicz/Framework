//
//  vector.h
//  
//
//  Created by Patryk Ząbkiewicz on 12.02.2015.
//
//

typedef struct _vect {
    
    // --- public values
    int size;
    int capacity;
    
    // --- private values
    int _sizeoftype;
    
    // --- member functions
    int (*push_back)(struct _vect *, void *);
    (void *) (*pop_back)(struct _vect *);
    
    // --- data
    void *v;

} vector;

int push_back(vector *v, void *elem) {

    return 0;
}
void * pop_back(vector *v) {

    return 0;
}