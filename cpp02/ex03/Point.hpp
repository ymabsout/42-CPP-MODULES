/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:15:25 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/14 03:43:58 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    ~Point();
    Point(const Point &ob);
    Point &operator=(const Point &objs);
    Point(const float a, const float b);

    float getX(void) const;
    float getY(void) const;

    static Fixed crossProduct(const Point &a, const Point &b, const Point &p);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
