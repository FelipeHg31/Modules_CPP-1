/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:10:02 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 06:18:34 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): AAnimal()
{
    std::cout << "Dog was created!!" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const std::string _type): AAnimal(_type)
{
    std::cout << "Dog was created by args!!" << std::endl;
}

Dog::Dog(const Dog& other): AAnimal(other)
{
    std::cout << "Dog copy was created!!" << std::endl;
    _brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog asig was created!!" << std::endl;
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog dead!" << std::endl;
    delete(_brain);
}

void Dog::makeSound() const
{
    std::cout << "GAUUU!!!!!" << std::endl;
}
