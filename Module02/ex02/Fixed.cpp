/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:57:38 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/01 05:08:50 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): value(0)
{}

Fixed::Fixed(const Fixed& other)
{
    this->value = other.value;
}

Fixed::Fixed(int const num)
{
    this->value = num * (1 << this->fractionalBit);
}

Fixed::Fixed(float const num)
{
    this->value = roundf(num * (1 << this->fractionalBit));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->value = other.value;
    return (*this);
}

Fixed::~Fixed()
{}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->value > other.value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->value != other.value);
}

Fixed& Fixed::operator--()
{
    this->value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->value -= 1;
    return (temp); 
}

Fixed& Fixed::operator++()
{
    this->value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->value += 1;
    return (temp); 
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat() const
{
    return ((float)this->value / (1 << this->fractionalBit));
}

int Fixed::toInt() const
{
    return (this->value / (1 << this->fractionalBit));
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





