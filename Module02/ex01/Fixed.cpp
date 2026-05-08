/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 17:57:38 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/08 22:09:42 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    _value = other._value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
    _value = num * (1 << _fractionalBit);
    std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(float const num)
{
    _value = roundf(num * (1 << _fractionalBit));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other._value;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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

