/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:26:36 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/19 01:54:54 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed t1 = Point::crossProduct(a, b, point);
    Fixed t2 = Point::crossProduct(b, c, point);
    Fixed t3 = Point::crossProduct(c, a, point);

    bool all_pos = (t1 > 0) && (t2 > 0) && (t3 > 0);
    bool all_neg = (t1 < 0) && (t2 < 0) && (t3 < 0);

    return (all_pos || all_neg);
}