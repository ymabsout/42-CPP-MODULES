/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:23:44 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/18 20:05:02 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int _fixedPoint;
		static const int _fractionalBits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const int num);
	Fixed(const float nb);
	Fixed(const Fixed & objs);
	Fixed	&operator =(const Fixed& ob);

	float	toFloat(void)const;
	int		toInt(void)const;
	int     getRawBits(void) const;
	void    setRawBits(int const raw);

	bool  operator>(const Fixed &ob) const;
	bool  operator>=(const Fixed &ob) const;
	bool  operator<(const Fixed &ob) const;
	bool  operator<=(const Fixed &ob) const;
	bool  operator==(const Fixed &ob) const;
	bool  operator!=(const Fixed &ob) const;

	Fixed operator+(const Fixed &ob) const;
	Fixed operator-(const Fixed &ob) const;
	Fixed operator*(const Fixed &ob) const;
	Fixed operator/(const Fixed &ob) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

};

	std::ostream &operator <<(std::ostream& output, const Fixed& object);

#endif