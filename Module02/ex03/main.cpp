/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 03:18:03 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/02 03:51:18 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(1.0 , 1.0);
    Point b(1.0 , 10.0);
    Point c(10.0, 1.0);
    Point point = Point(3.3, 3.0);

    if (bsp(a, b, c, point))
        std::cout << "Is in." << std::endl;
    else
        std::cout << "Is out." << std::endl;
    return (0);
}