/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 22:42:52 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 23:51:49 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}