//
//  Author: Patryk Ząbkiewicz
//
//  Date:   21.02.2015
//
//
//  pint is an object representation of basic type int
//
//

#include <string>
#include "../basictypes/common.h"

class pint : public int32 {
public:
    string toString() {
        return new string("hello");
    }
}

