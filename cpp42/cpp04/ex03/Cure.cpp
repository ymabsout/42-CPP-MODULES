#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << "Cure contructor called" << std::endl;
}

Cure::~Cure(){
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &objs){
    if (this != &objs)
        AMateria::operator=(objs);
    return (*this);
}

Cure::Cure(const Cure &objs) : AMateria(objs){
    std::cout << "Cure copy constructor called " << std::endl;
}

AMateria * Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target){
    std::cout << "Cure: * heals " << target.getName() << "’s wounds *" << std::endl;
}