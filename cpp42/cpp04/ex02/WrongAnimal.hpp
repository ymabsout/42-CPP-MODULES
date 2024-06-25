#include <iostream>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal & objs);
        WrongAnimal &operator=(const WrongAnimal &Objs);
        void makeSound() const;
        std::string getType() const;
};


#endif