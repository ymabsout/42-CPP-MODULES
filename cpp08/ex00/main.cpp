#include "easyfind.hpp"

int main (){
    try {
        std::vector < int > a;
        for (int i = 0 ; i  < 10; i++)
            a.push_back(i);
        easyfind(a, 300);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
