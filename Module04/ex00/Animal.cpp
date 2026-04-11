/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:36 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 01:01:08 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() 
{
    std::cout << "Animal was created!!" << std::endl;
}
Animal::Animal(const std::string type): type(type)
{
    std::cout << "Animal was created by args!!" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy was created!!" << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal asig was created!!" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout<<"The animal is death"<< std::endl;
}

void Animal::makeSound() const
{
    std::cout << "The animal makes a sound" << std::endl;
}


const std::string Animal::getType() const
{
    return(this->type);
}



