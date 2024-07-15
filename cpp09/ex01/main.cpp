#include "RPN.hpp"

int main (int ac, char **av){
    if (ac != 2){
        std::cout << "Please enter only one argument between " " " << std::endl;
        return (1);
    }
    RPN *polish = new RPN(av[1]);
    try{
        polish->rpnStarter();
        delete polish;
        return (0);
    }
    catch(const char * &e){
        delete polish;
        std::cout << e << std::endl;
    }
}