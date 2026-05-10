/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:43:56 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 21:38:01 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("new_clap__name"), ScavTrap(), FragTrap(), _name("new")
{
    std::cout << "DiamondTrap " << _name << " was created!\n";
    _h_points = 100;
    _e_points = 50;
    _a_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string _name): ClapTrap(_name + "_clap__name"), ScavTrap(), FragTrap(), _name(_name)
{
    std::cout << "New DiamondTrap " << _name << "!" << std::endl;
    _e_points = 50;
    _h_points = 100;
    _a_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
    std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The DiamondTrap " << _name << " was destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    if (_e_points >= 1 && _h_points >= 1)
        std::cout << "Diamond _name: " << _name << " | ClapTrap _name: " << ClapTrap::_name << std::endl;
    else
    {
        if (_e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}
