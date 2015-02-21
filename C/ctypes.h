//
//  ctypes.h
//
//  Native types in C evaluated for containers emulation
//
//  Created by Patryk Zabkiewicz on 15.02.2015
//

#ifndef CTYPES_H
#define CTYPES_H

#import <stddef.h>

typedef signed char char_t;
typedef signed int int_t;

typedef unsigned char uchar_t;
typedef unsigned int uint_t;

size_t char_t_size = sizeof(char_t);
size_t int_t_size = sizeof(int_t);
size_t uchar_t_size = sizeof(uchar_t);
size_t uint_t_size = sizeof(uint_t);

struct _char {
    char c[1]={0};
    void (*getsome)();
};
typedef _char char_class;

struct _int {
    int_t i[1]={0};
    void (*init)();
    void (*toChar)();
    void (*toString)();
    void (*fromString)();
};
typedef _int int_class;


void init() {
    
}

#endif // CTYPES_H