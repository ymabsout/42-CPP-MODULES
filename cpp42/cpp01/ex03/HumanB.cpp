/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:13:12 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 20:07:26 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name){
    this->tool = NULL;
    this->_name = name;
}

HumanB::~HumanB(void){
    std::cout << _name <<" has left the game" << std::endl;
}

void HumanB::setWeapon(Weapon &arm){
    this->tool = &arm;
}

void HumanB::attack(){
    if (tool)
        std::cout << _name << " attacks with their " 
            << tool->getType() << std::endl;
            
}