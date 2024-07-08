#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename t1, typename t2, typename t3>
void iter(t1 *array, t2 length, void (*ptr)(t3 x)){
    for (int i = 0; i < length; i++)
        ptr(array[i]);
}

template <typename t1>
void f(t1 i){
    std::cout << i << std::endl;
}

#endif