/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:15:02 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/14 03:32:16 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point p(2.66838, 2.3314); 

    if (bsp(a, b, c, p)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }
    return (0);
}