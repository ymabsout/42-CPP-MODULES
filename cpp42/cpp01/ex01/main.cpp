/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:59:14 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 11:06:04 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void f(){system("leaks Horde");}

int main (){
    atexit(f);
    Zombie *horde = zombieHorde(5, "freds");
    delete[]horde;
    return (0);
}