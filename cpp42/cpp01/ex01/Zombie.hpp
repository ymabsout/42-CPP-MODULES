/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:30:17 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 11:04:00 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private :
        std::string name;
    public :
    void announce(void);
    Zombie();
    void setname(std::string);
    ~Zombie(void);
};
Zombie* zombieHorde( int N, std::string name);

#endif