#include "iter.hpp"
#include <iostream>

int main(){
    float intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    iter(intArray, 5, f <int>);
    iter(floatArray, 5, f <float>);
    iter(charArray, 5, f<char>);
    return 0;
}