/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:32:07 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 15:25:59 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon &tool;
    public:
    void attack();
    HumanA(const std::string &name, Weapon&);
    ~HumanA(void);
};