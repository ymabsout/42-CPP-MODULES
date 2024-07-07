/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 04:06:53 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 05:33:07 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "Testing ScavTrap constructors and attack...\n";

    {
        ScavTrap defaultScav;
        defaultScav.attack("Target");
        defaultScav.takeDamage(5);
        defaultScav.beRepaired(3);
        defaultScav.guardGate();
    }
    std::cout << std::endl;
    {
        ScavTrap namedScav("Scavvy");
        namedScav.attack("Target");
        namedScav.takeDamage(5);
        namedScav.beRepaired(3);
        namedScav.guardGate();
    }
    std::cout << std::endl;
    {
        ScavTrap scav("TestScav");
        scav.attack("Target");
        scav.takeDamage(50);
        scav.beRepaired(25);
        scav.guardGate();
    }
    std::cout << "\nAll tests completed.\n";
    return 0;
}