#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>
#include <iostream>
#include <chrono>
#include <cstddef>
#include <ctime>
#include <iomanip>
#include <ostream>

class PmergeMe {
    private:
        std::vector < int > _vec;
        std::deque < int > _deq;

        std::vector <int> _vecjacobSeq;
        std::deque <int> _deqjacobSeq;

        PmergeMe();
    public:
        PmergeMe(std::vector < int > &, std::deque < int > &);
        ~PmergeMe();
        PmergeMe(const PmergeMe &);
        PmergeMe &operator=(const PmergeMe &);

        void vecFordJhonson();
        void vecSortPairs(std::vector < std::pair < int ,int > >&, size_t);
        void deqSortPairs(std::deque < std::pair < int ,int > >&, size_t);
        void GenerateJacobSequence(int );
        void GenerateJacobSequenceDeq(int );
        std::vector< int > MixedSequence();
        std::deque < int > MixedSequenceDeq();
        void MergeBothChains(std::vector < int > &, std::vector <int> &);
        void MergeBothChainsdeq(std::deque < int > &, std::deque <int> &);
        void deqFordJhonson();
};

#endif