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
        Point &operator=(const Point &objs);
        Point(const Point &ob);
        int getX(void) const;
        int getY(void) const;
        Point(const float a, const float b);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);