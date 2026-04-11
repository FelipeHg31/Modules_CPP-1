/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:42 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 17:06:00 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): AAnimal()
{
    std::cout << "Cat was created!!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const std::string type): AAnimal(type)
{
    std::cout << "Cat was created by args!!" << std::endl;
}

Cat::Cat(const Cat& other): AAnimal(other)
{
    std::cout << "Cat copy was created!!" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat asig was created!!" << std::endl;
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete (brain);
        brain = new Brain(*other.brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat dead!" << std::endl;
    delete (this->brain);
}

void Cat::makeSound() const
{
    std::cout << "MEOWW!!!!!" << std::endl;
}

