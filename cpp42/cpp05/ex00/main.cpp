#include "Bureaucrat.hpp"

int main() {
    try{
        Bureaucrat b1(0);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}