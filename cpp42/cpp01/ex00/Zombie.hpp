/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:31:26 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/05 23:21:40 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        void announce (void);
        Zombie(std::string);
        ~Zombie (void);
};