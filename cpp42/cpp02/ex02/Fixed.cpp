/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:23:45 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/18 20:05:54 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPoint(0){
    std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedPoint(num * 256){
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float nb){
    std::cout << "float constructor called" << std::endl;
    this->_fixedPoint = (roundf(nb * (1  << _fractionalBits)));
}

Fixed::Fixed(const Fixed &objs): _fixedPoint(objs._fixedPoint){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& ob){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ob)
        _fixedPoint = ob._fixedPoint;
    return (*this);
}

float Fixed::toFloat(void)const{
    return ((float)_fixedPoint / (1 << 8));
}

int Fixed::toInt(void) const{
    return (_fixedPoint / 256);
}

std::ostream &operator <<(std::ostream &out, const Fixed&objs){
    out << objs.toFloat();
    return (out);
}

bool Fixed::operator!=(const Fixed &ob)const{
    return (_fixedPoint != ob._fixedPoint);
}

bool Fixed::operator>(const Fixed &ob)const{
    return (_fixedPoint > ob._fixedPoint);
}

bool Fixed::operator>=(const Fixed &ob)const{
    return (_fixedPoint >= ob._fixedPoint);
}

bool Fixed::operator<(const Fixed &ob)const{
    return (_fixedPoint < ob._fixedPoint);
}

bool Fixed::operator<=(const Fixed &ob)const{
    return (_fixedPoint <= ob._fixedPoint);
}

bool Fixed::operator==(const Fixed &ob)const{
    return (_fixedPoint == ob._fixedPoint);
}

Fixed Fixed::operator+(const Fixed &ob) const{
    return (Fixed(this->toFloat() + ob.toFloat()));
}

Fixed Fixed::operator-(const Fixed &ob) const{
    return (Fixed(this->toFloat() - ob.toFloat()));
}

Fixed Fixed::operator*(const Fixed &ob) const{
    return (Fixed(this->toFloat() * ob.toFloat()));
}

Fixed Fixed::operator/(const Fixed &ob) const{
    return (Fixed(this->toFloat() / ob.toFloat()));
}

Fixed &Fixed::operator++(){
    this->_fixedPoint++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->_fixedPoint++;
    return (tmp);
}

Fixed &Fixed::operator--(){
    this->_fixedPoint--;
    return(*this);
}

Fixed Fixed::operator--(int){
    Fixed tmp(*this);
    this->_fixedPoint--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return (a > b ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return (a > b ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return (a > b ? a : b);
}
