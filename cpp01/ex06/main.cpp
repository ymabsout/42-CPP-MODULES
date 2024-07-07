/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:29:36 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/07 20:41:45 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char  **av){
    if (ac != 2){
        std::cout << "I am not sure how tired I am today... "<< std::endl;
        return (0);
    }
    Harl harl;
    harl.complain(av[1]);
    return (0);
}