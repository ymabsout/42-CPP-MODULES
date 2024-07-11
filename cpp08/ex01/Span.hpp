#include <iostream>
#include <exception>
#include <algorithm>
#include <vector> 

#ifndef SPAN_HPP
#define SPAN_HPP
class Span {
    private: 
        int _maxSize;
        std::vector < int > _numbers;
    public:
        Span();
        ~Span();
        Span(unsigned int N);
        Span &operator=(Span &);
        Span(const Span &);
        void addNumber(unsigned int );
        void addLargeNumbers(std::vector<int>::iterator,std::vector<int>::iterator);
        unsigned int longestSpan();
        unsigned int shortestSpan();

    class addNumberException : public std::exception {
        public: 
            const char *what() const _NOEXCEPT{
                return ("addNumberException is thrown");
            }
    };

    class shortestLongest: public std::exception {
        public: 
            const char *what() const _NOEXCEPT{
                return ("No number stored/only one element");
            }
    };
};

#endif