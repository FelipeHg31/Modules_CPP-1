/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:02:27 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 06:24:04 by juan-her         ###   ########.fr       */
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
    std::cout<< "* heals " << target.getName() << "is wounds " << std::endl;
}
