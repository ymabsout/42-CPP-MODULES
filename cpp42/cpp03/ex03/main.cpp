/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:41:28 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/20 20:51:05 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diam("Diamond");
    diam.attack("target2");
    diam.whoAmI();
    return 0;
}