#include <iostream>
#include <list>
#include <stack>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template < typename T > 
class MutantStack : public std::stack <T>  {
    public:
    MutantStack () : std::stack<T>(){
        std::cout << "Mutant stack constructor called" << std::endl;
    };

    MutantStack(const MutantStack &objs) : std::stack <T> (objs){
        std::cout << "Mutant copy constructor called" << std::endl;
    };

    MutantStack &operator=(const MutantStack & objs){
        if (this != &objs){
            std::cout << "Mutant copy assignement operator called" << std::endl;
            std::stack<T>::operator=(objs);
        }
        return (*this);
    }

    ~MutantStack(){
        std::cout << "Mutant destructor called " << std::endl;
    }

    typedef typename std::stack<T>::container_type::iterator 
};


#endif
