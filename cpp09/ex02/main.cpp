#include "PmergeMe.hpp"
#include <ctime>

int main (int ac , char **av){
    if (ac < 2){
        std::cout << "Please enter arguments" << std::endl;
        return (1);
    }
    try{
        std::vector <int> vecHolder;
        std::deque< int > deqHolder;
        for (int i = 1 ; i < ac; i++){
            int numArg = atol(av[i]);
            if (numArg < 0 || numArg > INT_MAX || numArg < INT_MIN)
                throw("Negative element in the arguments");
            else{
                vecHolder.push_back(atoi(av[i]));
                deqHolder.push_back(atoi(av[i]));
            }
        }
        PmergeMe * sumContainer = new PmergeMe(vecHolder, deqHolder);
        //vector
        try{
            clock_t start, end;
            start = clock(); // get starting time in clock_t struct
            sumContainer->vecFordJhonson();
            end = clock(); // get ending time in clock_t struct
            int timeforalgo = static_cast<double>(end - start) * 1000000;
            std::cout << timeforalgo <<  std::endl;
        }
        catch (const char * &e){
            std::cout << e << std::endl;
        }

        //deque
        // try{
        //     clock_t start, end;
        //     start = clock(); // get starting time in clock_t struct
        //     sumContainer->deqFordJhonson();
        //     end = clock(); // get ending time in clock_t struct
        // }
        // catch (const char * &e){
        //     std::cout << e << std::endl;
        // }

    }
    catch (const char * &e){
        std::cout << e << std::endl;
    }
}