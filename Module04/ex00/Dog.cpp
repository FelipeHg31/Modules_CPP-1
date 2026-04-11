/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:10:02 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 00:27:29 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
    std::cout << "Dog was created!!" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const std::string type): Animal(type)
{
    std::cout << "Dog was created by args!!" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy was created!!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog asig was created!!" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog dead!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "GAUUU!!!!!" << std::endl;
}