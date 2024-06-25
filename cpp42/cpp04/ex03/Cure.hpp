#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public:
    Cure();
    ~Cure();
    Cure(const Cure &objs);
    Cure &operator=(const Cure &objs);
    void use(ICharacter &target);
    AMateria * clone() const;
};

#endif