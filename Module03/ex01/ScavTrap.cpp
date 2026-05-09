/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:57:18 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 16:17:49 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap("new")
{
    std::cout << "New ScavTrap " << _name << std::endl;
    _h_points = 100;
    _e_points = 50;
    _a_damage = 20;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    std::cout << "ScapTrap " << name << " was created!" << std::endl;
    _h_points = 100;
    _e_points = 50;
    _a_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "New ScavTrap copy " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "New ScavTrap asig " << other._name << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap " << _name << " was detroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_e_points >= 1 && _h_points >= 1)
    {
        _e_points--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing  " << _a_damage <<  " points of damage!" << std::endl;
    }
    else
    {
        if (_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}
