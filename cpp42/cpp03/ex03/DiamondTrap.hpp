/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 06:06:32 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 08:23:33 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &objs);
        DiamondTrap &operator=(const DiamondTrap &objs);
        void attack(const std::string& target);
        void    whoAmI();
};


#endif