#include <iostream>
#include <list>
#include <stack>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template < typename T > 
class MutantStack : public std::stack <T> {
    public:
    MutantStack <T> ();
    MutantStack(const MutantStack &);

};


#endif
