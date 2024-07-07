#include "Animal.hpp"

Animal::Animal(){
    type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &objs){
    std::cout << "Copy constructor called" << std::endl;
    type = objs.type;
}

Animal &Animal::operator=(const Animal &objs){
    if (this != &objs)
        type = objs.type;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "Normal Animal" << std::endl;
}

std::string Animal::getType() const{
    return (type);
}
