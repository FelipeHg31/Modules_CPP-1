/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 22:42:26 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/27 00:09:44 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{ }

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

std::string HumanB::getName()
{
    return (name);
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

Weapon HumanB::getWeapon()
{
    return (*weapon);
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
