#include <iostream>
#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal{
	public: 
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &objs);
	WrongCat &operator=(const WrongCat &objs);
	void makeSound() const;
};

#endif