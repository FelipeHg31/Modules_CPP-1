/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:00:56 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 17:01:00 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() 
{
    std::cout << "AAnimal was created!!" << std::endl;
}
AAnimal::AAnimal(const std::string type): type(type)
{
    std::cout << "AAnimal was created by args!!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal copy was created!!" << std::endl;
    this->type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal asig was created!!" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout<<"The AAnimal is death"<< std::endl;
}

const std::string AAnimal::getType() const
{
    return(this->type);
}



