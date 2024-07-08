#include <iostream>

template <typename T> void iter(T *array, int length, void (*f)(T const &)){
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T> void f(T const &i){
    std::cout << i << std::endl;
}
