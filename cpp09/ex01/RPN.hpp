#include <iostream>
#include <stack>
#ifndef RPN_HPP
#define RPN_HPP

class RPN {
    private:
        std::stack < int > _numbersaver;
        char * _input;
    public:
        RPN();
        ~RPN();
        RPN(char * &);
        RPN(const RPN &);
        RPN &operator=(const RPN &);
        
        void rpnStarter();
        void addNumbers();
        void subNumbers();
        void mulNumbers();
        void divNumbers();
};


#endif