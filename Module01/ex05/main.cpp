/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 15:25:38 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/28 15:37:24 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
    std::string line;
    Harl harl;

    while (1)
    {
        if (!std::getline(std::cin, line))
            break ;
        if (line == "EXIT")
            break ;
        harl.complain(line);
    }
}