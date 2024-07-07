/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:05:06 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 06:05:13 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << _name << " ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Default ClapTrap  called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << _name << " Is DEAAAD" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &objs){
	std::cout << " ClapTrap Copy constructor called" << std::endl;
	_name = objs._name;
	_AttackDamage = objs._AttackDamage;
	_EnergyPoints = objs._EnergyPoints;
	_hitPoints = objs._hitPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &objs){
	if (this != &objs){
		_name = objs._name;
		_AttackDamage = objs._AttackDamage;
		_EnergyPoints = objs._EnergyPoints;
		_hitPoints = objs._hitPoints;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if (_hitPoints > 0 && _EnergyPoints > 0){
		std::cout << "ClapTrap " << _name << " attacks " << target <<" causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout << _name << " Does not have enough Hit Points D;" << std::endl;
	else if (_EnergyPoints <= 0)
		std::cout << _name << " Does not have enough Energyy D;" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount){
	if (_EnergyPoints > 0){
		std::cout << _name  << " got " << amount << " hit points back :D !!" << std::endl;
		_hitPoints += amount;
		_EnergyPoints-=amount;
	}
	else{
		std::cout << _name << " Does not have enough energy to Heal" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints > 0){
		std::cout << _name << " absorbed " << amount << " damage D: !! " << std::endl;
		_hitPoints -= amount;
	}
	else if (_hitPoints <= 0)
		std::cout << _name << " Have 0 health" << std::endl;
}
