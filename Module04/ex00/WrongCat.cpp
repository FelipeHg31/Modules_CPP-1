/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 01:23:42 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 01:31:00 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat was created!!" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string type): WrongAnimal(type)
{
    std::cout << "WrongCat was created by args!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
    std::cout << "WrongCat copy was created!!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat asig was created!!" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat dead!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "wrong MEOWW!!!!!" << std::endl;
}

