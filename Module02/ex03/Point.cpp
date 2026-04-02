/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:19 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/02 02:48:30 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    this->x = Fixed(0);
    this->y = Fixed(0);
}

Point::Point(const float nx, const float ny): x(Fixed(nx)), y (Fixed(ny)) {}

Point::Point(const Point& other): x(Fixed(other.x)), y (other.y) {}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return (*this);
}

Point::~Point(){}

Fixed Point::getX() const
{
    return (this->x);
}

Fixed Point::getY() const
{
    return (this->y);
}

