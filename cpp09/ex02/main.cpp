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
            clock_t startvec, endvec, startdeq, enddeq;
            std::cout << "Before : ";
            for (int i = 0; i < static_cast<int>(vecHolder.size()); i++)
                std::cout << vecHolder[i] << " ";
            std::cout << std::endl;
            startvec = clock(); // get starting time in clock_t struct
            sumContainer->vecFordJhonson();
            endvec = clock(); // get ending time in clock_t struct
            double timeforalgovec = static_cast<double>(endvec - startvec) / (double)CLOCKS_PER_SEC * 1000000.0;
            startdeq = clock();
            // sumContainer->deqFordJhonson();
            enddeq = clock();
            double timeforalgodeq = static_cast<double>(enddeq - startdeq) / (double)CLOCKS_PER_SEC * 1000000.0;
            std::cout << "After : ";
            for (int i = 0 ; i < static_cast<int>(deqHolder.size()); i++)
                std::cout << deqHolder[i] << " ";
            std::cout << std::endl;
            std::cout << "Time to process a range of " << vecHolder.size() << " elements with std::vector  : " << timeforalgovec << std::endl;
            std::cout << "Time to process a range of " << deqHolder.size() << " elements with std::deque  : " << timeforalgodeq << std::endl;
        }
        catch (const char * &e){
            std::cout << e << std::endl;
        }
    }
    catch (const char * &e){
        std::cout << e << std::endl;
    }
}