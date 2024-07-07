/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:20:31 by ymabsout          #+#    #+#             */
/*   Updated: 2024/05/24 18:03:20 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main (int ac, char **av)
{
    (void)av;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    int i = 0;
    int j;

    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
            std::cout << (char)toupper(av[i][j]);
    }
    std::cout << std::endl;
}