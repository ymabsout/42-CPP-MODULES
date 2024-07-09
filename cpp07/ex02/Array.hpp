#include <iostream>
#include <exception>

#pragma once

template <class T> class Array {
    private:
        T *_array;
        unsigned int _size;
    public:
        Array(): _array(nullptr), _size(0) {
                std::cout << "Template Array default constructor" << std::endl;
        }
        Array(unsigned int n): _array(new T[n]), _size(n) {
            std::cout << "Template Array constructor" << std::endl;
        }
        Array(Array const &srcs): _array(new T[srcs.size()]), _size(srcs.size()) {
            std::cout << "Template Array copy constructor" << std::endl;
            for (unsigned  int i = 0; i < srcs.size(); i++)
                    this->_array[i] = srcs._array[i];
        }
        ~Array(){
            std::cout << "Template Array destructor" << std::endl;
            delete []_array;
        }
        Array &operator=(Array const &objs){
            std::cout << "Template Array assignation operator" << std::endl;
            if (this != &objs){
                _size = objs.size();
                delete []_array;
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = objs._array[i];
            }
            return (*this);
        }

        T &operator[](unsigned int i){
            if (i >= _size || i < 0)
                throw OutOfLimitsException();
            return _array[i];
        }

        unsigned int size() const{
            return (_size);
        }

        class OutOfLimitsException : public std::exception {
            public:
                const char *what() const _NOEXCEPT{
                    return ("Out of limits");
                };
        };

};
