#include "Array.hpp"
#include <iostream>

int main (){
    try{
        Array<char> a(5);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = 'a' + i;
        Array<int> b(10);
        for (unsigned int i = 0; i < b.size(); i++)
            b[i] = i;
        Array<int> d;
        d = b;
        Array<char> c(a);
        for (unsigned int j = 0; j < c.size(); j++)
            std::cout << c[j] << " ";
        std::cout << std::endl;
        for (unsigned int i = 0; i < d.size(); i++)
            std::cout << d[i] << " ";
        std::cout << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << " ";
        std::cout << std::endl;
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << " ";
        std::cout << std::endl;
        std::cout << a[5] << std::endl;
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}