#ifndef CHAR_H
#define CHAR_H

#include "common.h"

namespace pchar {

typedef struct _pchar {
	uint8 c[1];
} pchar;

template<class T>
class pchar
{
	pchar c;

public:
	const =operator() const; 
}

}

#endif // CHAR_H

