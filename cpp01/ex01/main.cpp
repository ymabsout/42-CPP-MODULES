/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:59:14 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 21:11:00 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (){
    Zombie *horde = zombieHorde(5, "freds");
    for (int i =0 ; i < 5; i++)
        horde[i].announce();
    delete[]horde;
    return (0);
}