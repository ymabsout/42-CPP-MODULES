#include "BitcoinExchange.hpp"

int main (int ac, char **av){
    if (ac == 2){
        try{
            BitcoinExchange *be = new BitcoinExchange(av[1]);;
            be->getData();
            delete be;
        }
        catch(std::string &e){
            std::cout << e << std::endl;
        }
    }
    else{
        std::cout << "Enter a correct file path" << std::endl;
        return (1);
    }
    return (0);
}