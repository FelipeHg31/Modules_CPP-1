/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 22:42:31 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/27 00:06:05 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}


