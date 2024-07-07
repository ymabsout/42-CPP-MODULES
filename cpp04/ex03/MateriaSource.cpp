#include "MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource default constructor " << std::endl;
    for (int i = 0; i < 4 ; i++)
        learnedAMateria[i] = nullptr;
}

MateriaSource::~MateriaSource(){
    deleteAMateria();
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &objs){
    std::cout << "MateriaSource copy constructor called" << std::endl;
    copyAMateria(objs);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &objs){
    if (this != &objs){
        deleteAMateria();
        copyAMateria(objs);
    }
    return (*this);
}

void MateriaSource::copyAMateria(const MateriaSource &objs){
        for (int i = 0; i < 4; i++){
            this->learnedAMateria[i] = objs.learnedAMateria[i]->clone();
        }
}

void MateriaSource::deleteAMateria(){
    for(int i = 0 ; i < 4 ; i++)
        learnedAMateria[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria * m){
    for (int i = 0; i < 4; i++){
        if (learnedAMateria[i] == nullptr){
            learnedAMateria[i] = m;
            return ;
        }
    }
}

AMateria * MateriaSource::createMateria(const std::string &type){
    for (int i = 0; i < 4; i++){
        if (learnedAMateria[i] != nullptr && learnedAMateria[i]->getType() == type){
            return (learnedAMateria[i]->clone());
        }
    }
    return nullptr;
}
