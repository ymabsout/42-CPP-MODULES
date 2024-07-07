#include "Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        Cat(const Cat &objs);
        Cat &operator=(const Cat &objs);
        void makeSound() const;
};

#endif