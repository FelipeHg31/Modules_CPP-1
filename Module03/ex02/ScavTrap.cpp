/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 14:57:18 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/05 16:05:47 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap("new")
{
    std::cout << "New ScavTrap " << this->name << std::endl;
    this->h_points = 100;
    this->e_points = 50;
    this->a_damage = 20;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    std::cout << "ScapTrap " << name << " was created!" << std::endl;
    this->h_points = 100;
    this->e_points = 50;
    this->a_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "New ScavTrap copy " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "New ScavTrap asig " << other.name << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap " << this->name << " was detroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->e_points >= 1 && this->h_points >= 1)
    {
        this->e_points--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing  " << this->a_damage <<  " points of damage!" << std::endl;
    }
    else
    {
        if (this->e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}
