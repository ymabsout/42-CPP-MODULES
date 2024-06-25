#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &objs){
    std::cout << "Copy constructor called" << std::endl;
    type = objs.type;
}

Cat &Cat::operator=(const Cat &objs){
    if (this != &objs)
        type = objs.type;
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}