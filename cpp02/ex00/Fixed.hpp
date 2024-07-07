/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:21:05 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/18 19:45:18 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private: 
        int _fixed_point_numb;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        ~Fixed();
        Fixed &operator=(const Fixed& obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif