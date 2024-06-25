#include "Cat.hpp"
#include "Animal.hpp"


Cat::Cat() {
    type = "Cat";
    attr = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(){
    delete  attr;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &objs){
    std::cout << "Copy constructor called" << std::endl;
    attr = new Brain(*objs.attr);
    type = objs.type;
}

Cat &Cat::operator=(const Cat &objs){
    if (this != &objs){
        type = objs.type;
        delete this->attr;
        attr = new Brain(*objs.attr);
    }
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
}
