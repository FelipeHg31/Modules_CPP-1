/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:12:27 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 06:19:27 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & _type): _type(_type){}

AMateria::AMateria(): _type("") {}

AMateria::AMateria(const AMateria& other): _type(other._type) {}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    return (*this);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}


