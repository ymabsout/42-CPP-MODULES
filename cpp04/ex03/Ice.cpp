#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &objs) : AMateria(objs) {
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &objs){
    if (this != &objs){
        AMateria::operator=(objs);
    }
    return (*this);
}

AMateria* Ice::clone() const{
    return (new Ice (*this));
}

void Ice::use(ICharacter &target){
    std::cout <<  "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}