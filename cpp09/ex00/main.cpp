#include "BitcoinExchange.hpp"

int main (int ac, char **av){
    if (ac == 2){
        BitcoinExchange *be = new BitcoinExchange(av[1]);;
        try{
            be->getData();
            delete be;
        }
        catch(char const* &e){
            delete be;
            std::cout << e << std::endl;
        }
    }
    else{
        std::cout << "Enter a correct file path" << std::endl;
        return (1);
    }
    return (0);
}