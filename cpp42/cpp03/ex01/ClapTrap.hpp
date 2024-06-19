/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 04:06:36 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 05:14:57 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ClapTrap {
    protected :
        std::string _name;
        int _hitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap(const std::string &name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &objs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif