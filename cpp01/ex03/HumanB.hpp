/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:08:07 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 15:17:38 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon *tool;
    public:
        HumanB(const std::string&);
        void attack();
        void setWeapon(Weapon &);
        ~HumanB(void);
};