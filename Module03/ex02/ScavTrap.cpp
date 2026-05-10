/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:57:18 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 21:33:25 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap("new")
{
    std::cout << "New ScavTrap " << this->_name << std::endl;
    this->_h_points = 100;
    this->_e_points = 50;
    this->_a_damage = 20;
}

ScavTrap::ScavTrap(const std::string _name): ClapTrap(_name)
{
    std::cout << "ScapTrap " << _name << " was created!" << std::endl;
    this->_h_points = 100;
    this->_e_points = 50;
    this->_a_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "New ScavTrap copy " << this->_name << std::endl;
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
    std::cout << "The ScavTrap " << this->_name << " was detroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_e_points >= 1 && _h_points >= 1)
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
    else
    {
        if (_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_e_points >= 1 && this->_h_points >= 1)
    {
        this->_e_points--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing  " << this->_a_damage <<  " points of damage!" << std::endl;
    }
    else
    {
        if (this->_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}
