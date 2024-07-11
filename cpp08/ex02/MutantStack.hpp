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

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack <T>::container_type::const_iterator const_iterator;
    typedef typename std::stack <T>::container_type::const_reverse_iterator creviterator;
    typedef typename std::stack <T>::container_type::reverse_iterator r_iterator;

    iterator begin(){
        return (this->c.begin());
    }
    iterator end(){
        return(this->c.end());
    }
    const_iterator cbegin(){
        return (this->c.cbegin());
    }
    const_iterator cend(){
        return(this->c.cend());
    }
    creviterator crbegin(){
        return (this->c.crbegin());
    }
    creviterator crend(){
        return(this->c.crend());
    }
    r_iterator rbegin(){
        return(this->c.rbegin());
    }
    r_iterator rend(){
        return(this->c.rend());
    }
};

#endif
