#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &objs){
    std::cout << "WrongCat Copy constructor called " << std::endl;
    *this = objs;
}

WrongCat &WrongCat::operator=(const WrongCat &objs){
    std::cout << "WrongCat copy assignement operator called " << std::endl;
    if (this != &objs)
        type = objs.type;
    return (*this);
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat sound !" << std::endl;
}