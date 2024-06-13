/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:24:08 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/13 11:57:01 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &obj){
        _fixed_point_numb = obj.getRawBits();
    }
    return(*this);
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_fixed_point_numb);
}

void Fixed::setRawBits(int const raw){
    this->_fixed_point_numb = raw;
}

Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy constructor called" << std::endl;
    *this = (obj);
}

Fixed::Fixed(const int number): _fixed_point_numb(number << _storage){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num): _fixed_point_numb(roundf(num * (1 << _storage))){
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void)const{
    return ((float)_fixed_point_numb / (1 << _storage));
}

int Fixed::toInt(void) const{
    int ans;

    ans = _fixed_point_numb / (1 << _storage);
    return (ans);
}

std::ostream &operator <<(std::ostream &out, const Fixed&objs){
    out << objs.toFloat();
    return (out);
}