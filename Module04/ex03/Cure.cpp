/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:02:27 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/10 17:03:15 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure"){}

Cure::Cure(const std::string type): AMateria(type){}

Cure::Cure(const Cure& other): AMateria(other){}

Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return(*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout<< "* heals " << target.getName() << "’s wounds " << std::endl;
}