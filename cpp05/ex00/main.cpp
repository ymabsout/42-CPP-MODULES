#include "Bureaucrat.hpp"

int main() {
    try{
        Bureaucrat b1("mskin",160);
        std::cout << "test" << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b2("waer", 20);
        std::cout << b2;} 
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}