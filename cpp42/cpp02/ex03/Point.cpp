/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:26:44 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 01:55:55 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


Point::Point() : x(0), y(0) {
    std::cout << "Default constructor called" << std::endl;
}

Point::~Point() {
    std::cout << "Default destructor called" << std::endl;
}

Point::Point(const float a, const float b) : x(a), y(b) {
    std::cout << "Point Float Constructor Called " << std::endl;
    std::cout << x.toInt() << " " << y.toInt() << std::endl;
}

Point::Point(const Point &ob) : x(ob.x), y(ob.y) {
    std::cout << "Copy constructor called" << std::endl;
}

float Point::getX(void) const {
    return this->x.toFloat();
}

float Point::getY(void) const {
    return this->y.toFloat();
}

Point& Point::operator=(const Point& ob) {
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}
Fixed Point::crossProduct(const Point &a, const Point &b, const Point &p) {
    Fixed t1((b.x - a.x) * (p.y - a.y));
    Fixed t2((p.x - a.x) * (b.y - a.y));
    return (t1 - t2);
}
