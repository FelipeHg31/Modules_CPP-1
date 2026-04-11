/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:46:32 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/10 17:03:26 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice"){}

Ice::Ice(const std::string type): AMateria(type){}

Ice::Ice(const Ice& other): AMateria(other){}

Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return(*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
