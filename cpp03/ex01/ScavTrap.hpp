/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 04:06:59 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 05:13:32 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &objs);
        ScavTrap &operator=(const ScavTrap &objs);

        void guardGate();
        void attack(const std::string& target);
};

