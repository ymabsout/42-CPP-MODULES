/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:49:23 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 21:08:38 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setname(std::string name){
    this->name = name;
}

Zombie::Zombie(void){
    std::cout << "Zombie created" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << this->name << ": Died" << std::endl;
}