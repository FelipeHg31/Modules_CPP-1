/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 21:40:43 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/04 21:33:49 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("new"), h_points(10), e_points(10), a_damage(0)
{
    std::cout << "New ClapTrap " << this->name << std::endl;
}

ClapTrap::ClapTrap(const std::string str): name(str), h_points(10), e_points(10), a_damage(0)
{
    std::cout << "New ClapTrap " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name) 
{
    std::cout << "New ClapTrap copy " << this->name << std::endl;
    this->h_points = other.h_points;
    this->e_points = other.e_points;
    this->a_damage = other.a_damage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "New ClapTrap asig " << other.name << std::endl;
    if (this != &other)
    {
        this->h_points = other.h_points;
        this->e_points = other.e_points;
        this->a_damage = other.a_damage;  
    }
    return (*this);
}


ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap " << this->name << " was detroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->e_points >= 1 && this->h_points >= 1)
    {
        this->e_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing  " << this->a_damage <<  " points of damage!" << std::endl;
    }
    else
    {
        if (this->e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (amount >= this->h_points)
        this->h_points = 0;
    else 
        this->h_points -= amount;
    std::cout << "ClapTrap " << this->name << " has taken " << amount << " of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->e_points >= 1 && this->h_points >= 1)
    {
        this->h_points--;
        this->h_points += amount;
        std::cout << "ClapTrap " << this->name << " was repaired with " << amount << "." << std::endl;
    }
    else
    {
        if (this->e_points < 1)
            std::cout << "No energy points" << std::endl;
        else
            std::cout << "No hit points" << std::endl;
    }
}



