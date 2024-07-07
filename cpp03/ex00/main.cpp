/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 03:55:59 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 04:05:16 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

int main() {
    std::cout << "Testing constructors and assignment...\n";

    {
        ClapTrap defaultTrap;
        defaultTrap.attack("Target");
        defaultTrap.takeDamage(5);
        defaultTrap.beRepaired(3);
    }

    {
        ClapTrap namedTrap("TestBot");
        namedTrap.attack("Target");
        namedTrap.takeDamage(5);
        namedTrap.beRepaired(3);
    }

    {
        ClapTrap originalTrap("Original");
        ClapTrap copyTrap(originalTrap);
        copyTrap.attack("Target");
        copyTrap.takeDamage(5);
        copyTrap.beRepaired(3);
    }

    {
        ClapTrap firstTrap("First");
        ClapTrap secondTrap("Second");
        secondTrap = firstTrap;
        secondTrap.attack("Target");
        secondTrap.takeDamage(5);
        secondTrap.beRepaired(3);
    }

    std::cout << "\nTesting attack...\n";
    {
        ClapTrap attacker("Attacker");
        for (int i = 0; i < 10; ++i) {
            attacker.attack("Target1");
        }
        attacker.attack("Target2");
        for (int i = 0; i < 10; ++i) {
            attacker.takeDamage(1);
        }
        attacker.attack("Target3");
    }

    std::cout << "\nTesting takeDamage...\n";
    {
        ClapTrap victim("Victim");
        victim.takeDamage(3);
        victim.takeDamage(7);
        victim.takeDamage(5);
    }

    std::cout << "\nTesting beRepaired...\n";
    {
        ClapTrap healer("Healer");
        healer.beRepaired(5);
        for (int i = 0; i < 9; ++i) {
            healer.beRepaired(1);
        }
        healer.beRepaired(3);
    }

    std::cout << "\nAll tests completed.\n";
    return (0);
}
