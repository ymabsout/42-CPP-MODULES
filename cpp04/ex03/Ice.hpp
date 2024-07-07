#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &objs);
        Ice &operator=(const Ice &objs);
        void use(ICharacter &targert);
        AMateria * clone()const;
};

#endif