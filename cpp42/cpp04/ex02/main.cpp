#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <array>
#include <cstddef>

int main() {
    std::array<Animal *,  2 > Animals;
    for (int i = 0 ; i < (int)Animals.size() / 2 ; i++){
        Animals[i] =  new Cat();
        std::cout << Animals[i]->getType() << std::endl;
    }
    for (int i = Animals.size() / 2 ; i < (int)Animals.size() ; i++){
        Animals[i] = new Dog();
        std::cout << Animals[i]->getType() << std::endl;
    }
    for (int i = 0 ; i < (int)Animals.size() ; i++)
        delete Animals[i];
}