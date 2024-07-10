#include "MutantStack.hpp"

int main (){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;
    MutantStack < int > a ;
    a = mstack;
    a.push(20);
    std::cout << a.top() << std::endl;
    a.pop();
    a.pop();
    std::cout << a.top() << std::endl;
}

