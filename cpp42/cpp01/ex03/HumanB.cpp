/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:13:12 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 15:17:41 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name){
    this->_name = name;
}

HumanB::~HumanB(void){
    std::cout << "HumanB has left the game" << std::endl;
}

void HumanB::setWeapon(Weapon &arm){
    this->tool = &arm;
}

void HumanB::attack(){
    std::cout << _name << "attacks with their " 
        << tool->getType() << std::endl;
}