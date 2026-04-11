/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 00:51:33 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 15:44:26 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() 
{
    std::cout << "WrongAnimal was created!!" << std::endl;
}
WrongAnimal::WrongAnimal(const std::string type): type(type)
{
    std::cout << "WrongAnimal was created by args!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy was created!!" << std::endl;
    this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal asig was created!!" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Th WrongAnimal is death"<< std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal makes a sound" << std::endl;
}


const std::string WrongAnimal::getType() const
{
    return(this->type);
}
