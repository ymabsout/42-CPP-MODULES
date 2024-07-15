#include "RPN.hpp"

RPN::RPN(): _input(NULL){
    std::cout << "Rpn default constructor called " << std::endl;
}

RPN::RPN(char * &input): _input(input){
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

void RPN::rpnStarter(){
    for (int i = 0 ; i < (int)strlen(_input); i++){
        if (isdigit(_input[i])){
            _numbersaver.push(_input[i] - '0');
        }
        else {
            if (_input[i] == ' ')
                continue ;
            else if (_numbersaver.size() < 2)
                throw("Error");
            if (_input[i] == '+')
                addNumbers();
            else if (_input[i] == '-')
                subNumbers();
            else if (_input[i] == '*')
                mulNumbers();
            else if (_input[i] == '/')
                divNumbers();
        }
    }
    if (_numbersaver.size() != 1)
        throw("invalid RPN");
    std::cout << _numbersaver.top() << std::endl;
    _numbersaver.pop();
}

void RPN::addNumbers(){
    int a = _numbersaver.top();
    _numbersaver.pop();
    int b = _numbersaver.top();
    _numbersaver.pop();
    _numbersaver.push(a + b);
}

void RPN::subNumbers(){
    int a = _numbersaver.top();
    _numbersaver.pop();
    int b = _numbersaver.top();
    _numbersaver.pop();
    _numbersaver.push(b - a);
}
void RPN::mulNumbers(){
    int a = _numbersaver.top();
    _numbersaver.pop();
    int b = _numbersaver.top();
    _numbersaver.pop();
    _numbersaver.push(a * b);
}
void RPN::divNumbers(){
    int a = _numbersaver.top();
    _numbersaver.pop();
    int b = _numbersaver.top();
    _numbersaver.pop();
    if (!a)
        throw("Cannot divide by 0");
    _numbersaver.push(b / a);
}