/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:41:28 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 18:12:43 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diam("Diamond");
    DiamondTrap diam2();
    diam.attack("target");
    diam2.attack("target2");
    diam.whoAmI();
    return 0;
}