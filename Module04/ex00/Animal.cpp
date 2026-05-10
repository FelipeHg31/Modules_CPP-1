/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:36 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/09 21:45:17 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() 
{
    std::cout << "Animal was created!!" << std::endl;
}
Animal::Animal(const std::string _type): _type(_type)
{
    std::cout << "Animal was created by args!!" << std::endl;
}

Animal::Animal(const Animal& other): _type(other._type)
{
    std::cout << "Animal copy was created!!" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal asig was created!!" << std::endl;
    if (this != &other)
        _type = other._type;
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
    return(_type);
}



