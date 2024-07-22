#include "PmergeMe.hpp"

int main (int ac , char **av){
    if (ac < 2){
        std::cout << "Please enter arguments" << std::endl;
        return (1);
    }
    try{
        std::vector <int> vecHolder;
        std::deque< int > deqHolder;
        for (int i = 1 ; i < ac; i++){
            for (size_t j = 0 ; j < strlen(av[i]); j++){
                if (!isdigit(av[i][j])){
                    throw("Non digit element in the arguments");
                }
            }
            int numArg = atol(av[i]);
            if (numArg < 0 || numArg > INT_MAX || numArg < INT_MIN)
                throw("Negative element in the arguments");
            else{
                vecHolder.push_back(atoi(av[i]));
                deqHolder.push_back(atoi(av[i]));
            }
        }
        PmergeMe * sumContainer = new PmergeMe(vecHolder, deqHolder);
        try{
            clock_t startvec, endvec, startdeq, enddeq;
            std::cout << "Before : ";
            for (int i = 0; i < static_cast<int>(vecHolder.size()); i++)
                std::cout << vecHolder[i] << " ";
            std::cout << std::endl;
            startvec = clock(); // get starting time in clock_t struct
            sumContainer->vecFordJhonson();
            endvec = clock(); // get ending time in clock_t struct
            double timeforalgovec = static_cast<double>(endvec - startvec) * 1000 / (double)CLOCKS_PER_SEC;
            startdeq = clock();
            sumContainer->deqFordJhonson();
            enddeq = clock();
            double timeforalgodeq = static_cast<double>(enddeq - startdeq) * 1000 / (double)CLOCKS_PER_SEC ;
            std::cout << std::endl;
            std::cout << std::setprecision(10) << "Time to process a range of " << vecHolder.size() << " elements with std::vector  : " << timeforalgovec << "ms" << std::endl;
            std::cout << std::setprecision(10) << "Time to process a range of " << deqHolder.size() << " elements with std::deque  : " << timeforalgodeq << "ms" << std::endl;
            delete sumContainer;
        }
        catch (const char * &e){
            std::cout << e << std::endl;
            delete sumContainer;
        }
    }
    catch (const char * &e){
        std::cout << e << std::endl;
    }
}