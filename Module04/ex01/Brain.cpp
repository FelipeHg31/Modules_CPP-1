/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:59:44 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/09 16:33:30 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() 
{
    std::cout << "Brain was created by default" << std::endl;
}

Brain::Brain(const std::string ideas[100])
{
    std::cout << "Brain was created by arguments" << std::endl;
    for (int i=0; i < 100; i++)
        this->ideas[i] = ideas[i];
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain was created by copy" << std::endl;
    for (int i=0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain was created by asignation" << std::endl;
    if (this != &other)
    {
        for (int i=0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain was destructed" << std::endl;
}
