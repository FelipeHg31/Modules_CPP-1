/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:39:36 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/05 18:05:07 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap("new")
{
    std::cout << "New FragTrap " << this->name << " default!" << std::endl;
    this->e_points = 100;
    this->h_points = 100;
    this->a_damage = 30;
}

FragTrap::FragTrap(const std::string name): ClapTrap (name)
{
    std::cout << "New FragTrap " << this->name << "!" << std::endl;
    this->e_points = 100;
    this->h_points = 100;
    this->a_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "New FragTrap copy " << this->name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "New FragTrap asig " << other.name << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap " << this->name << " was destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " wants a high five!" << std::endl;
}

