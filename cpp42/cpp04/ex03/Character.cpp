#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): name("Empty"){
    for (int i = 0; i < 4; i++)
        inventory[i] = nullptr;
    std::cout << "Character Default constructor called " << std::endl;
}

Character::Character(const std::string &name): name(name){
    for (int i = 0; i < 4 ; i++)
        inventory[i] = nullptr;
    std::cout << name << " Character Constructor called " << std::endl;
}

Character::Character(const Character &Objs): name(Objs.getName()){
    std::cout << "Copy Constructor called" << std::endl;
    copyInventory(Objs);
}

Character &Character::operator=(const Character &Objs){
    std::cout << "Character copy assignment operator called" << std::endl;
    if (this != &Objs){
        name = Objs.getName();
        deleteInventory();
        copyInventory(Objs);
    }
    return (*this);
}

Character::~Character(){
    deleteInventory();
    std::cout << "Character destructor called " << std::endl;
}

void Character::deleteInventory(){
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

void Character::copyInventory(const Character &objs){
    for (int i =0; i < 4 ; i++){
        if (objs.inventory[i] != nullptr){
            inventory[i] = objs.inventory[i]->clone();
        }
        else {
            inventory[i] = nullptr;
        }
    }
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (inventory[i] == nullptr){
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3 || inventory[idx] == nullptr)
        return ;
    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx > 3 || inventory[idx] == nullptr)
        return ;
    inventory[idx]->use(target);
}

std::string const &Character::getName() const {
    return (name);
}