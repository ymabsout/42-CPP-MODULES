#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type(""){
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type){
    std::cout << "AMateria " << type << " Contructor called "<< std::endl;
}

std::string const & AMateria::getType() const {
    return (type);
}

AMateria::AMateria(const AMateria &objs){
    std::cout << "Copy constructor called " << std::endl;
    type = objs.getType();
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called " << std::endl;
}

void AMateria::use(ICharacter &target){
    std::cout << "Using "<< type <<" on " << target.getName() << std::endl;
}

AMateria &AMateria::operator=(const AMateria& objs){
    if (this != &objs)
        this->type = objs.getType();
    return (*this);
}

