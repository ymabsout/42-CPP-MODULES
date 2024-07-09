#include "Span.hpp"

Span::Span() : _maxSize(0) {
    std::cout << "Default constructor called" << std::endl;
}

Span::~Span(){
    std::cout << "Default destructor called" << std::endl;
}

Span::Span(unsigned int N) : _maxSize(5){
    std::cout << "constructor with : "<<  N << " called" << std::endl;
}

void Span::addNumber(unsigned int N){
    if (static_cast<int>(_numbers.size()) < _maxSize){
        _numbers.push_back(N);
        for (int i =0 ; i < _maxSize; i++){
            std::cout << _numbers[i] << " ";
        }
        return ;
    }
    throw(std::out_of_range("index out of range !!"));
}

Span &Span::operator=(const Span &objs){
    if (this != &objs){
        this->_maxSize = objs._maxSize;
        this->_numbers = objs._numbers;
    }
    return (*this);
}

unsigned int Span::shortestSpan(){
    if (_numbers.size() <= 1){
        throw(addNumberException());
        return (0);
    }
    std::sort(_numbers.begin(), _numbers.end());
    int small = INT_MAX;
    for (int i = 1 ; i < _maxSize; i++){
        small = std::min(_numbers[i], _numbers[i - 1]);
    }
    return (small);
}

unsigned int Span::longestSpan(){
    if (_numbers.size() <= 1){
        throw(addNumberException());
        return (0);
    }
    unsigned int b = *(std::max(_numbers.begin(), _numbers.end()));
    unsigned int s = *(std::min(_numbers.begin(), _numbers.end()));
    std::cout << _numbers[b] << " " <<  _numbers[s] << std::endl;
    return (b - s);
}

