#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &objs);
		Animal &operator=(const Animal &objs);
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif