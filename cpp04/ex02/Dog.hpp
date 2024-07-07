
#include "Animal.hpp"
#include "Brain.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog: public Animal {
    private:
        Brain * attr;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &objs);
        Dog &operator=(const Dog &objs);
        void makeSound() const;
};

#endif