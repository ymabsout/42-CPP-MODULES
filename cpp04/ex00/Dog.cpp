#include "Dog.hpp"
#include "Animal.hpp"
Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &objs){
    std::cout << "Copy constructor called" << std::endl;
    type = objs.type;
}

Dog &Dog::operator=(const Dog &objs){
    if (this != &objs)
        type = objs.type;
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Woof" << std::endl;
}