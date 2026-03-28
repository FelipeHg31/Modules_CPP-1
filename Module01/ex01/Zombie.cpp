/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:05:06 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 20:29:39 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return (this->name);
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed." << std::endl;
}