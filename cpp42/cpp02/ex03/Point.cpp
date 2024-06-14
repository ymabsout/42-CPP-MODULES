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

float Point::getX(void)const {
    return(this->x.toFloat());
}

float Point::getY(void)const {
    return(this->y.toFloat());
}

Fixed Point::crossProduct(const Point &a, const Point &b, const Point &p){
    int t1 = (b.getX() - a.getX()) * (p.getY() - a.getY());
    int t2 = (p.getX() - a.getX()) * (b.getY() - a.getY());
    return (t1 -t2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

    Fixed t1 = Point::crossProduct(a, b, point);
    Fixed t2 = Point::crossProduct(a,c,point);
    Fixed t3 = Point::crossProduct(b,c,point);

    std::cout << t1.getRawBits() << " " <<  t1.getRawBits() << std::endl;
    int all_pos = (t1.getRawBits() > 0 && t2.getRawBits() > 0 && t3.getRawBits() > 0);
    int all_neg = (t1.getRawBits() < 0 && t2.getRawBits() < 0 && t3.getRawBits() < 0);

    std::cout << all_neg << " " << all_pos << std::endl;
    return (all_pos && all_neg);
}