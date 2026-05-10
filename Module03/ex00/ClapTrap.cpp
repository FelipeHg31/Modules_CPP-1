/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 21:40:43 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 21:21:53 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("new"), _h_points(10), _e_points(10), _a_damage(0)
{
    std::cout << "New ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string str): _name(str), _h_points(10), _e_points(10), _a_damage(0)
{
    std::cout << "New ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name) 
{
    std::cout << "New ClapTrap copy " << _name << std::endl;
    _h_points = other._h_points;
    _e_points = other._e_points;
    _a_damage = other._a_damage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "New ClapTrap asig " << other._name << std::endl;
    if (this != &other)
    {
        _h_points = other._h_points;
        _e_points = other._e_points;
        _a_damage = other._a_damage;  
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap " << _name << " was detroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_e_points >= 1 && _h_points >= 1)
    {
        _e_points--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing  " << _a_damage <<  " points of damage!" << std::endl;
    }
    else
    {
        if (_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (amount >= _h_points)
        _h_points = 0;
    else 
        _h_points -= amount;
    std::cout << "ClapTrap " << _name << " has taken " << amount << " of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_e_points >= 1 && _h_points >= 1)
    {
        _h_points--;
        _h_points += amount;
        std::cout << "ClapTrap " << _name << " was repaired with " << amount << "." << std::endl;
    }
    else
    {
        if (_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}



