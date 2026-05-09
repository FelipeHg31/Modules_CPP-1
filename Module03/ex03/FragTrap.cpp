/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:39:36 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 16:39:08 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap("new")
{
    std::cout << "New FragTrap " << this->_name << " default!" << std::endl;
    this->_e_points = 100;
    this->_h_points = 100;
    this->_a_damage = 30;
}

FragTrap::FragTrap(const std::string _name): ClapTrap (_name)
{
    std::cout << "New FragTrap " << this->_name << "!" << std::endl;
    this->_e_points = 100;
    this->_h_points = 100;
    this->_a_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "New FragTrap copy " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "New FragTrap asig " << other._name << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap " << this->_name << " was destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " wants a high five!" << std::endl;
}

