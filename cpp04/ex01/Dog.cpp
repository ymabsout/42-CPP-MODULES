#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
    type = "Dog";
    attr = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
    delete  attr;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &objs){
    std::cout << "Copy constructor called" << std::endl;
    attr = new Brain(*objs.attr);
    type = objs.type;
}

Dog &Dog::operator=(const Dog &objs){
    if (this != &objs){
        type = objs.type;
        delete this->attr;
        attr = new Brain(*objs.attr);
    }
    return(*this);
}

void Dog::makeSound() const{
    std::cout << "Woof" << std::endl;
}