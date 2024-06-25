#include "Brain.hpp"
#include <mutex>

Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &objs){
    this->ideas = objs.ideas;
    std::cout << "Copy constructor called " << std::endl;
}

Brain &Brain::operator=(const Brain &objs){
    if (this != &objs)
        ideas = objs.ideas;
    return (*this);
}