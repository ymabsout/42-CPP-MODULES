/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:13:28 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/20 20:52:59 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "Default";
    ClapTrap::_name = "Default_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"){
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << _name << " Constructor with a name called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &objs) {
    *this = objs;
	std::cout << _name << " DiamondTrap copy constructor called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &objs) {
    if (this != &objs){
        _name = objs._name;
        _hitPoints = objs._hitPoints;
        _EnergyPoints = objs._EnergyPoints;
        _AttackDamage = objs._AttackDamage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap default destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "name: " << _name << " . And claptrap name: " 
        << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}