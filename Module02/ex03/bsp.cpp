/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:12:12 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/08 23:42:08 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
    return ( (a.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX()) * (a.getY() - c.getY()) );
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed a1 = area(point, a, b);
    Fixed a2 = area(point, b, c);
    Fixed a3 = area(point, c, a);
    
    if (a1 == Fixed(0) || a2 == Fixed(0) || a3 == Fixed(0))
        return (false);
    if ((a1 < 0) && (a2 < 0) && (a3 < 0))
        return true;
    if ((a1 > 0) && (a2 > 0) && (a3 > 0))
        return true;
    return false;
}
