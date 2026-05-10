/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:42 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 18:10:56 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
    std::cout << "Cat was created!!" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const std::string _type): Animal(_type)
{
    std::cout << "Cat was created by args!!" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat copy was created!!" << std::endl;
    _brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat asig was created!!" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        delete (_brain);
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat dead!" << std::endl;
    delete (_brain);
}

void Cat::makeSound() const
{
    std::cout << "MEOWW!!!!!" << std::endl;
}

