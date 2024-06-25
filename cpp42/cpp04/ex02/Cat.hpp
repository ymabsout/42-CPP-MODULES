#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
    private:
        Brain * attr;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &objs);
        Cat &operator=(const Cat &objs);
        void makeSound() const;
};

#endif