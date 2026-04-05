/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:43:56 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/05 20:00:09 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("new_clap_name"), ScavTrap(), FragTrap(), name("new")
{
    std::cout << "DiamondTrap " << this->name << " was created!\n";
    this->h_points = 100;
    this->e_points = 50;
    this->a_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
    std::cout << "New DiamondTrap " << this->name << "!" << std::endl;
    this->e_points = 50;
    this->h_points = 100;
    this->a_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
    std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The DiamondTrap " << this->name << " was destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << name << " | ClapTrap name: " << ClapTrap::name << std::endl;
}
