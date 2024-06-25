#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Objs){
    std::cout << "WrongAnimal copy constructor called " << std::endl;
    *this = Objs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Objs){
    if (this != &Objs){
        type = Objs.getType();
    }
    return (*this);
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound !" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}