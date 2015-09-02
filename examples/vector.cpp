//
//  Project: Example of the vector
//
//  Author: Patryk Ząbkiewicz
//  Date:   22.02.2015
//
//

#include <iostream>
#include "../containers/vector.h"

using namespace std;

int main(int argc, char *argv[]) {

    vector<int> v;
    
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);

    for (vector::iterator<int> it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
    
    
    return 0;
}