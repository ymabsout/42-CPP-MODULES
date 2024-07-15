#include "RPN.hpp"

RPN::RPN(): _input(nullptr){
    std::cout << "Rpn default constructor called " << std::endl;
}

RPN::RPN(char * &input) : _input(input){
    std::cout << "RPN constructor called with input" << std::endl;
}

RPN::~RPN(){
    std::cout << "Rpn destructor called " << std::endl;
}

RPN::RPN(const RPN &objs) : _numbersaver(objs._numbersaver), _input(objs._input){
    std::cout << "RPN copy constructor called " << std::endl;
}

RPN & RPN::operator=(const RPN &objs){
    if (this != &objs){
        this->_input = objs._input;
        this->_numbersaver = objs._numbersaver;
    }
    return (*this);
}