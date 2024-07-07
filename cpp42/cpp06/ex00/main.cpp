#include "ScalarConverter.hpp"

int main (int ac, char **av){
    if (ac != 2)
        std::cout << "enter correct args num" << std::endl;
    else{
        std::string s = av[1];
        ScalarConverter::convert(s);
    }
}