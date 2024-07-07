/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:46:37 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 12:50:42 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->_type = type;
}

std::string const &Weapon::getType(){
    return (this->_type);
}

void Weapon::setType(std::string type){
    this->_type = type;
}