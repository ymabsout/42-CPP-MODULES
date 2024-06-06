/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:25:42 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 15:11:50 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string);
        std::string const   &getType(void);
        void                setType(std::string);
};