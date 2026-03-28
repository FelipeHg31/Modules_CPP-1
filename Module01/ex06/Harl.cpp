/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 03:17:46 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/28 16:25:56 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


Harl::Harl(){}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

static int ft_check(std::string level)
{
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
        return (1);
    return (0);  
}

void Harl::filter(std::string level)
{
    char c;

    if (ft_check(level))
        c = level[0];
    else
        c = 'a';
    switch (c)
    {
    case 'D':
        debug();
        info();
        warning();
        error();
        break;
    case 'I':
        info();
        warning();
        error();
        break;
    case 'W':
        warning();
        error();
        break;
    case 'E':
        error();
        break;
    default:
        std::cout << "Probably complaining about insignificant problems..." << std::endl;
        break;
    }
}