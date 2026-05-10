/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:00:56 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 18:14:56 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() 
{
    std::cout << "AAnimal was created!!" << std::endl;
}
AAnimal::AAnimal(const std::string _type): _type(_type)
{
    std::cout << "AAnimal was created by args!!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal copy was created!!" << std::endl;
    _type = other._type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal asig was created!!" << std::endl;
    if (this != &other)
        _type = other._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout<<"The AAnimal is death"<< std::endl;
}

const std::string AAnimal::getType() const
{
    return(_type);
}



