/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:25:43 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/14 03:32:19 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed::Fixed(): _fixedPoint(0){
    std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedPoint(num << _fractionalBits) {
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _fixedPoint(roundf(nb * (1  << _fractionalBits))) {
    std::cout << "float constructor called" << std::endl;
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
    return (_fixedPoint >> _fractionalBits);
}
// int Fixed::getRawBits(void)const{
//     std::cout << "getRawBits member function called" << std::endl;
//     return(this->_fixedPoint);
// }

// void Fixed::setRawBits(int const raw){
//     std::cout << "setRawBits member function called" << std::endl;
//     this->_fixedPoint = raw;
// }




// std::ostream &operator <<(std::ostream &out, const Fixed&objs){
//     out << objs.toFloat();
//     return (out);
// }

// bool Fixed::operator!=(const Fixed &ob)const{
//     return (this->toFloat() != ob.toFloat());
// }

// bool Fixed::operator>(const Fixed &ob)const{
//     return (this->_fixedPoint > ob._fixedPoint);
// }

// bool Fixed::operator>=(const Fixed &ob)const{
//     return (this->_fixedPoint >= ob._fixedPoint);
// }

// bool Fixed::operator<(const Fixed &ob)const{
//     return(this->toFloat() < ob.toFloat());
// }

// bool Fixed::operator<=(const Fixed &ob)const{
//     return(this->toFloat() <= ob.toFloat());
// }

// bool Fixed::operator==(const Fixed &ob)const{
//     return(this->toFloat() == ob.toFloat());
// }

// Fixed Fixed::operator+(const Fixed &ob){
//     Fixed ans;
//     ans._fixedPoint = ((this->_fixedPoint + ob._fixedPoint) >> _fractionalBits);
//     return (ans);
// }

// Fixed Fixed::operator-(const Fixed &ob)const{
//     Fixed ans;
//     ans._fixedPoint = ((this->_fixedPoint - ob._fixedPoint) >> _fractionalBits);
//     return (ans);
// }

// Fixed Fixed::operator*(const Fixed &ob){
//     Fixed ans;
//     ans._fixedPoint = ((this->_fixedPoint * ob._fixedPoint) >> _fractionalBits);
//     return (ans);
// }

// Fixed Fixed::operator/(const Fixed &ob){
//     Fixed ans;
//     ans._fixedPoint = ((this->_fixedPoint / ob._fixedPoint) >> _fractionalBits);
//     return (ans);
// }

// Fixed &Fixed::operator++(){
//     this->_fixedPoint++;
//     return (*this);
// }

// Fixed Fixed::operator++(int){
//     Fixed tmp = *this;
//     this->_fixedPoint++;
//     return (tmp);
// }

// Fixed &Fixed::operator--(){
//     this->_fixedPoint--;
//     return(*this);
// }

// Fixed Fixed::operator--(int){
//     Fixed tmp(*this);
//     this->_fixedPoint--;
//     return (tmp);
// }

// Fixed &Fixed::min(Fixed &a, Fixed &b){
//     return (a._fixedPoint > b._fixedPoint ? b : a);
// }

// const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
//     return (a._fixedPoint > b._fixedPoint ? b : a);
// }

// Fixed &Fixed::max(Fixed &a, Fixed &b){
//     return (a._fixedPoint > b._fixedPoint ? a : b);
// }

// const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
//     return (a._fixedPoint > b._fixedPoint ? a : b);
// }


Fixed::Fixed() : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _fixedPoint(num << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _fixedPoint(roundf(nb * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &objs) : _fixedPoint(objs._fixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ob) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ob)
        _fixedPoint = ob._fixedPoint;
    return *this;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPoint) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _fixedPoint >> _fractionalBits;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPoint = raw;
}

bool Fixed::operator>(const Fixed &ob) const {
    return _fixedPoint > ob._fixedPoint;
}

bool Fixed::operator>=(const Fixed &ob) const {
    return _fixedPoint >= ob._fixedPoint;
}

bool Fixed::operator<(const Fixed &ob) const {
    return _fixedPoint < ob._fixedPoint;
}

bool Fixed::operator<=(const Fixed &ob) const {
    return _fixedPoint <= ob._fixedPoint;
}

bool Fixed::operator==(const Fixed &ob) const {
    return _fixedPoint == ob._fixedPoint;
}

bool Fixed::operator!=(const Fixed &ob) const {
    return _fixedPoint != ob._fixedPoint;
}

Fixed Fixed::operator+(const Fixed &ob) const {
    return Fixed(this->toFloat() + ob.toFloat());
}

Fixed Fixed::operator-(const Fixed &ob) const {
    return Fixed(this->toFloat() - ob.toFloat());
}

Fixed Fixed::operator*(const Fixed &ob) const {
    return Fixed(this->toFloat() * ob.toFloat());
}

Fixed Fixed::operator/(const Fixed &ob) const {
    return Fixed(this->toFloat() / ob.toFloat());
}

Fixed &Fixed::operator++() {
    _fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _fixedPoint++;
    return temp;
}

Fixed &Fixed::operator--() {
    _fixedPoint--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _fixedPoint--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &objs) {
    out << objs.toFloat();
    return out;
}