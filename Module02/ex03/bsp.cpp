/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:12 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/02 03:52:50 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
    return (b.getX() - a.getX()) * (c.getY() - a.getY()) -
           (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed a1 = area(point, a, b);
    Fixed a2 = area(point, b, c);
    Fixed a3 = area(point, c, a);

    bool has_neg = (a1 < 0) || (a2 < 0) || (a3 < 0);
    bool has_pos = (a1 > 0) || (a2 > 0) || (a3 > 0);

    return !(has_neg && has_pos);
}