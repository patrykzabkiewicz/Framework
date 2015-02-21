//
//  vector.h
//
//  Naive vector implentation in C
//
//  Created by Patryk Ząbkiewicz on 12.02.2015.
//
//
#ifndef VECTOR_H
#define VECTOR_H

#define CHUNK 4

typedef struct _vect_t {
    
    // --- public values
    int size;
    
    // --- private values
    int _sizeoftype;
    int _capacity;
    
    // --- member functions
    void (*push_back)(struct _vect_t *, const int);
    int (*pop_back)(struct _vect_t *);
    
    // --- data
    void *ptr;
    
} vector_t_int;


// initialize vector
void init(void *, int);

// push to capacity and expand if there is a need
int push_back(const void, vector *);

// deallocates memory from vector end
void * pop_back(vector *);



#endif // VECTOR_H
