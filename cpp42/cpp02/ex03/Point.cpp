/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:26:44 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/14 03:44:35 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0) ,y(0){
    std::cout << "Default constructor called" << std::endl;
}

Point::~Point(){
    std::cout << "Default destructor called" << std::endl;
}

Point::Point(const float a, const float b): x(a), y(b){
    std::cout << "Point Float Constructor Called " << std::endl;
    std::cout << x.getRawBits() << " " << y.getRawBits() << std::endl;
}

Point::Point(const Point &ob): x(ob.x), y(ob.y){
    std::cout << "Copy constructor called" << std::endl;
}

int Point::getX(void)const {
    return (this->x.getRawBits());
}

int Point::getY(void)const {
    return (this->y.getRawBits());
}

// Fixed Point::crossProduct(Point &a, Point &b){
// }

bool bsp( Point const a, Point const b, Point const c, Point const point){


}