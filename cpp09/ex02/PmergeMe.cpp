#include "PmergeMe.hpp"
#include <algorithm>

PmergeMe::PmergeMe(){
    std::cout << "PmergeMe default constructor called " << std::endl;
}

PmergeMe::~PmergeMe(){
    std::cout << "PmergeMe default destructor called " << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &objs): _vec(objs._vec), _deq(objs._deq), _deqjacobSeq(objs._deqjacobSeq), _vecjacobSeq(objs._vecjacobSeq){
    std::cout << "PmergeMe copy constructor called " << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe&objs){
    if (this != &objs){
        _vec = objs._vec;
        _deq = objs._deq;
        _vecjacobSeq = objs._vecjacobSeq;
        _deqjacobSeq = objs._deqjacobSeq;
    }
    return (*this);
}

PmergeMe::PmergeMe(std::vector<int > &vec, std::deque < int > &deq) : _vec(vec), _deq(deq){
    std::cout << "PmergeMe constructor called with vector and deque called" << std::endl;
}

void PmergeMe::vecFordJhonson(){
    std::vector < std::pair < int , int > > PairGroups;
    int vecSize = _vec.size();
    int saver = -1;
    if (vecSize % 2){
        saver = _vec[static_cast <int> (vecSize - 1)];
        _vec.pop_back();
        vecSize--;
    }

    for (int i = 0 ; i < vecSize; i += 2){
        PairGroups.push_back(std::make_pair(_vec[i], _vec[i + 1]));
    }

    for (int i = 0 ; i < static_cast<int>(PairGroups.size()) ; i++){
        if (PairGroups[i].first < PairGroups[i].second){
            int tmp = PairGroups[i].first;
            PairGroups[i].first = PairGroups[i].second;
            PairGroups[i].second = tmp;
        }
    }

    vecSortPairs(PairGroups, PairGroups.size()); //recursively sort the pairs!!
    std::vector < int> MainChain;
    std::vector < int> BChain;

    for (int i = 0 ;i < static_cast<int>(PairGroups.size()); i++){
        MainChain.push_back(PairGroups[i].first);
        BChain.push_back(PairGroups[i].second);
    }
    
    PairGroups.clear(); // destroy the vector of pairs
    MainChain.insert(MainChain.begin(), BChain[0]);
    BChain.erase(BChain.begin());
    GenerateJacobSequence(BChain.size());
    _vecjacobSeq = MixedSequence();
    MergeBothChains(MainChain, BChain);
    //insert the remaining element 
    if (saver != -1)
        MainChain.insert(std::lower_bound(MainChain.begin(), MainChain.end(), saver), saver );
    std::cout << "Sorted sequence using vector : ";
    for (int i = 0 ; i < static_cast <int>(MainChain.size()); i++)
        std::cout << MainChain[i] << " ";
    std::cout << std::endl;
}


void PmergeMe::MergeBothChains(std::vector<int> &MainChain, std::vector<int> &BChain){
    int verifyInsert = 0;
    for (int i = 0 ; i < static_cast <int>(_vecjacobSeq.size()); i++){
        if (verifyInsert >= static_cast<int>(BChain.size())){ // Dont loop through the whole sequence
            break;
        }
        if (_vecjacobSeq[i] - 2 >= static_cast<int>(BChain.size()))
            continue;
        int element = BChain[(_vecjacobSeq[i] - 2)];

        MainChain.insert(std::lower_bound(MainChain.begin(), MainChain.end(), element), element);
        verifyInsert++;
    }
}

void PmergeMe::GenerateJacobSequence(int size){
    _vecjacobSeq.push_back(0);
    _vecjacobSeq.push_back(1);
    _vecjacobSeq.push_back(1);

    for (int i = 2 ; i < size + 2 ; i++)
        _vecjacobSeq.push_back(_vecjacobSeq[i] + (2 * _vecjacobSeq[i - 1]));
}

std::vector < int > PmergeMe::MixedSequence(){
    std::vector <int > saveSeq;
    saveSeq.push_back(0);
    saveSeq.push_back(1);
    saveSeq.push_back(1);
    int h  = 1;
    for (int i = 3 ; i < static_cast<int>(_vecjacobSeq.size()); i++) {
        saveSeq.push_back(_vecjacobSeq[i]);
        int depre = saveSeq.back() - 1;
        while (depre > h){
            saveSeq.push_back(depre);
            depre--;
        }
        if (h > static_cast<int>(_vec.size())){
            break;
        }
        h = _vecjacobSeq[i];
    }
    saveSeq.erase(saveSeq.begin(), saveSeq.begin() + 3);
    return (saveSeq);
}

void PmergeMe::vecSortPairs(std::vector < std::pair < int , int > > &Pairs, size_t n) {
    if (n <= 1){
        return ; 
    }
    vecSortPairs(Pairs, n - 1);
    std::pair < int , int > key = Pairs[n - 1];
    int j = n - 2;
    while (j >= 0 && Pairs[j].first > key.first){
        Pairs[j + 1] = Pairs[j];
        j-=1;
    }
    Pairs[j + 1] = key;
}


// deque implementation
void PmergeMe::deqFordJhonson(){
    std::deque < std::pair < int , int > > PairGroups;
    int deqSize = _deq.size();
    int saver = -1;
    if (deqSize % 2){
        saver = _deq[static_cast <int> (deqSize - 1)];
        _deq.pop_back();
        deqSize--;
    }

    for (int i = 0 ; i < deqSize; i += 2){
        PairGroups.push_back(std::make_pair(_deq[i], _deq[i + 1]));
    }

    for (int i = 0 ; i < static_cast<int>(PairGroups.size()) ; i++){
        if (PairGroups[i].first < PairGroups[i].second){
            int tmp = PairGroups[i].first;
            PairGroups[i].first = PairGroups[i].second;
            PairGroups[i].second = tmp;
        }
    }

    deqSortPairs(PairGroups, PairGroups.size()); //recursively sort the pairs!!
    std::deque < int> MainChain;
    std::deque < int> BChain;

    for (int i = 0 ;i < static_cast<int>(PairGroups.size()); i++){
        MainChain.push_back(PairGroups[i].first);
        BChain.push_back(PairGroups[i].second);
    }
    PairGroups.clear(); // destroy the vector of pairs
    MainChain.push_front(BChain[0]);
    BChain.erase(BChain.begin());
    GenerateJacobSequence(BChain.size());
    _deqjacobSeq = MixedSequenceDeq();
    // insert the pending chain in the mainchain
    MergeBothChainsdeq(MainChain, BChain);
    //insert the remaining element 
    if (saver != -1)
        MainChain.insert(std::lower_bound(MainChain.begin(), MainChain.end(), saver), saver );
    std::cout << "Sorted sequence using deque : ";
    for (int i = 0 ; i < static_cast <int>(MainChain.size()); i++)
        std::cout << MainChain[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::deqSortPairs(std::deque<std::pair<int, int> > &Pairs, size_t n){
    if (n <= 1){
        return ; 
    }
    deqSortPairs(Pairs, n - 1);
    std::pair < int , int > key = Pairs[n - 1];
    int j = n - 2;
    while (j >= 0 && Pairs[j].first > key.first){
        Pairs[j + 1] = Pairs[j];
        j-=1;
    }
    Pairs[j + 1] = key;
}

void PmergeMe::GenerateJacobSequenceDeq(int size){
    _deqjacobSeq.push_back(0);
    _deqjacobSeq.push_back(1);
    _deqjacobSeq.push_back(1);

    for (int i = 2 ; i < size + 2 ; i++)
        _deqjacobSeq.push_back(_deqjacobSeq[i] + (2 * _deqjacobSeq[i - 1]));
}

std::deque < int > PmergeMe::MixedSequenceDeq(){
    std::deque <int > saveSeq;
    saveSeq.push_back(0);
    saveSeq.push_back(1);
    saveSeq.push_back(1);
    int h  = 1;
    for (int i = 3 ; i < static_cast<int>(_vecjacobSeq.size()); i++) {
        saveSeq.push_back(_vecjacobSeq[i]);
        int depre = saveSeq.back() - 1;
        while (depre > h){
            saveSeq.push_back(depre);
            depre--;
        }
        if (h > static_cast<int>(_vec.size())){
            break;
        }
        h = _vecjacobSeq[i];
    }
    saveSeq.erase(saveSeq.begin(), saveSeq.begin() + 3);
    return (saveSeq);
}

void PmergeMe::MergeBothChainsdeq(std::deque<int> &MainChain, std::deque<int> &BChain){
    int verifyInsert = 0;
    for (int i = 0 ; i < static_cast <int>(_vecjacobSeq.size()); i++){
        if (verifyInsert >= static_cast<int>(BChain.size())){ // Dont loop through the whole sequence
            break;
        }
        if (_vecjacobSeq[i] - 2 >= static_cast<int>(BChain.size()))
            continue;
        int element = BChain[(_vecjacobSeq[i] - 2)];

        MainChain.insert(std::lower_bound(MainChain.begin(), MainChain.end(), element), element);
        verifyInsert++;
    }
}
