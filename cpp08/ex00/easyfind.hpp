#include <algorithm>
#include <iostream>
#include <vector>
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class elementNotFound : public std::exception{
    public : 
        const char * what() const _NOEXCEPT{
            return ("Element not found in the template container");
        }
};

template <typename T> void easyfind(T a, int b){
    if(std::find(a.begin(), a.end(), b) != a.end())
        std::cout << "Found element "<< b<< " in the template container" << std::endl;
    else
        throw(elementNotFound());
}


#endif