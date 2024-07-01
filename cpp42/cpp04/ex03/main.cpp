#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

// int main() {
//     IMateriaSource* src = new MateriaSource(); 
//     src->learnMateria(new Ice()); 
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp = NULL;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob"); 
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob; delete me; delete src;
//     return 0;
// }

int main() {
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    ICharacter* character = new Character("Hero");

    character->equip(ice);
    character->equip(cure);

    ICharacter* target = new Character("Target");

    std::cout << "Using Materia on Target:" << std::endl;
    character->use(0, *target);  
    character->use(1, *target);  


    std::cout << "Testing invalid Materia usage:" << std::endl;
    character->use(2, *target);  
    character->use(-1, *target); 

    std::cout << "Unequipping Materia:" << std::endl;
    character->unequip(0);
    character->use(0, *target);  

    delete target;
    delete character;
    delete ice;

    return (0);
}
