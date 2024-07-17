#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>
#include <iostream>
#include <chrono>


class PmergeMe {
    private:
        std::vector < int > _vec;
        std::deque < int > _deq;

        std::vector <int> _vecjacobSeq;
        std::deque <int> _deqjacobSeq;

    public:
        PmergeMe();
        PmergeMe(std::vector < int > &, std::deque < int > &);
        ~PmergeMe();
        PmergeMe(const PmergeMe &);
        PmergeMe &operator=(const PmergeMe &);

        void vecFordJhonson();
        void vecSortPairs(std::vector < std::pair < int ,int > >&, size_t);
        void GenerateJacobSequence(int );
        std::vector< int > MixedSequence();
        void MergeBothChains(std::vector < int > &, std::vector <int> &);
        int GenerateJacobSequenceRecursive(int );
        void deqFordJhonson();
};

#endif