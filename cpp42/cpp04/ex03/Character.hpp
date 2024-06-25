#include <array>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : public ICharacter{
    private:
        std::string name;
        std::array<AMateria *, 4> inventory;
        int AMaterias;
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &objs);
        Character &operator=(const Character &Objs);
        ~Character();

        std::string const &getName() const;
        void equip(AMateria * m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        void deleteInventory();
        void copyInventory(const Character &objs);

};

#endif