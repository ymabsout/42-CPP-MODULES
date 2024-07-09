#include <iostream>
#include <exception>
#include <algorithm>
#include <vector> 

#ifndef SPAN_HPP
#define SPAN_HPP
class Span {
    private: 
        std::vector < int > _numbers;
        int _maxSize;
    public:
        Span();
        ~Span();
        Span(unsigned int N);
        Span &operator=(const Span &);
        void addNumber(unsigned int );
        unsigned int longestSpan();
        unsigned int shortestSpan();

    class addNumberException : public std::exception {
        public: 
            const char *what() const _NOEXCEPT{
                return ("addNumberException is thrown");
            }
    };
};

#endif