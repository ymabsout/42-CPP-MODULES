#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << animal->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete animal;
    delete dog;
    delete cat;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongAnimal->getType() << std::endl;
    std::cout << wrongCat->getType() << std::endl;
    
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}