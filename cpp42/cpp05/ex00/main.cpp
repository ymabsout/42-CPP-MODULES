#include "Bureaucrat.hpp"

int main() {
    try{
        Bureaucrat b1(160);
        std::cout << "test" << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}