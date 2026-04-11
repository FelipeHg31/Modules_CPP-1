/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:42 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 16:40:34 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
    std::cout << "Cat was created!!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const std::string type): Animal(type)
{
    std::cout << "Cat was created by args!!" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat copy was created!!" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat asig was created!!" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
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

