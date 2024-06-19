/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 05:40:00 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 05:59:15 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap Default Scavtrap have been constructed" << std::endl;
    _hitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " <<_name << " Has been destructed D: !!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    std::cout <<"ScavTrap " << _name <<  " constructor is built !!" << std::endl;
    _hitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &objs){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	_name = objs._name;
	_AttackDamage = objs._AttackDamage;
	_EnergyPoints = objs._EnergyPoints;
	_hitPoints = objs._hitPoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &objs) {
    if (this != &objs){
		_name = objs._name;
		_AttackDamage = objs._AttackDamage;
		_EnergyPoints = objs._EnergyPoints;
        _hitPoints = objs._hitPoints;
    }
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << _name << " ScavTrap is now in Gate Keeper mode !!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if ( _hitPoints > 0 && _EnergyPoints > 0){
		std::cout << "ScavTrap " << _name << " attacks " << target <<" causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else if ( _hitPoints <= 0)
		std::cout << _name << " Does not have enough Hit Points D;" << std::endl;
	else if ( _EnergyPoints <= 0)
		std::cout << _name << " Does not have enough Energyy D;" << std::endl;
}