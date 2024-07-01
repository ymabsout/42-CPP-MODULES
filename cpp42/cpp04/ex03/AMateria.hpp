#include <iostream>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria();
        AMateria(const AMateria &objs);
        AMateria &operator=(const AMateria & objs);
        virtual ~AMateria();
};

#endif