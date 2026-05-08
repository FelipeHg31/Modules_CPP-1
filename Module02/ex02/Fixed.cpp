/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:57:38 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/08 22:17:57 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _value(0)
{}

Fixed::Fixed(const Fixed& other)
{
    _value = other._value;
}

Fixed::Fixed(int const num)
{
    _value = num * (1 << _fractionalBit);
}

Fixed::Fixed(float const num)
{
    _value = roundf(num * (1 << _fractionalBit));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        _value = other._value;
    return (*this);
}

Fixed::~Fixed()
{}

bool Fixed::operator>(const Fixed& other) const
{
    return (_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (_value < other._value);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (_value != other._value);
}

Fixed& Fixed::operator--()
{
    _value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    _value -= 1;
    return (temp); 
}

Fixed& Fixed::operator++()
{
    _value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _value += 1;
    return (temp); 
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(toFloat() / other.toFloat());
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat() const
{
    return ((float)_value / (1 << _fractionalBit));
}

int Fixed::toInt() const
{
    return (_value / (1 << _fractionalBit));
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}





