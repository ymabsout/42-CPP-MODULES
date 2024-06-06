/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:31:44 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 15:31:41 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name , Weapon &tmp): tool(tmp){
    _name = name;
}

void HumanA::attack(){
    std::cout << _name << "attacks with their " 
    << tool.getType() << std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA done playing" << std::endl;
}