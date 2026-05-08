/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 03:18:03 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/08 23:37:29 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int main()
{
    Point a(6.0 , 9.0);
    Point b(5.0 , 2.0);
    Point c(10.0, 6.0);
    Point point(6.5, 6.5);

    if (bsp(a, b, c, point))
        std::cout << "Is in." << std::endl;
    else
        std::cout << "Is out." << std::endl;
    return (0);
}
