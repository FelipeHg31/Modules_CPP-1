/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:19 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/08 22:43:43 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0){}

Point::Point(const float nx, const float ny): _x(Fixed(nx)), _y(Fixed(ny)) {}

Point::Point(const Point& other): _x(other.getX()), _y(other.getY()) {}

Point& Point::operator=(const Point& other) 
{
    (void) other;
    return (*this);
}

Point::~Point(){}

Fixed Point::getX() const
{
    return (_x);
}

Fixed Point::getY() const
{
    return (_y);
}
