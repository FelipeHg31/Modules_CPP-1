/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:22 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/02 03:03:05 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const float nx, const float ny);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        void setX(float num);
        Fixed getX() const;
        void setY(float num);
        Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif