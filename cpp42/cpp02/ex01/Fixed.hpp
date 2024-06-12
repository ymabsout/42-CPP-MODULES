/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:21:17 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/12 22:27:07 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

    private: 
        int _fixed_point_numb;
        static const int _storage = 8;

    public:
        Fixed();
        Fixed(const int number);
        Fixed(const Fixed& obj);
        Fixed(const float num);
        ~Fixed();
        float   toFloat(void)const;
        int     toInt(void)const;
        Fixed   &operator=(const Fixed& obj);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

};
    std::ostream &operator <<(std::ostream&out , const Fixed&objs);

#endif