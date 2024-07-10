#include "Span.hpp"

Span::Span() : _maxSize(0) {
    std::cout << "Span default constructor called" << std::endl;
}

Span::~Span(){
    std::cout << "Span default destructor called" << std::endl;
}

Span::Span(unsigned int N) : _maxSize(N){
    std::cout << "Span constructor called for size "<< N <<  std::endl;
}

Span::Span(const Span & objs) : _maxSize(objs._maxSize), _numbers(objs._numbers){
    std::cout << "Span Copy Constructor called" << std::endl;
}

Span &Span::operator=(Span &objs){
    if (this != &objs){
        this->_maxSize = objs._maxSize;
        this->_numbers = objs._numbers;
    }
    return (*this);
}

void Span::addNumber(unsigned int N){
    if (static_cast<int>(_numbers.size()) < _maxSize){
        _numbers.push_back(N);
        return ;
    }
    throw(std::out_of_range("index out of range !!"));
}

unsigned int Span::shortestSpan(){
    if (_numbers.size() <= 1){
        throw(addNumberException());
        return (0);
    }
    std::sort(_numbers.begin(), _numbers.end());
    int small = INT_MAX;
    for (int i = 1 ; i < static_cast<int>(_numbers.size()); i++){
        small = std::min(small ,_numbers[i] - _numbers[i - 1]);
    }
    return (small);
}

unsigned int Span::longestSpan(){
    if (_numbers.size() <= 1){
        throw(addNumberException());
        return (0);
    }
    return(*std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end()));
}
