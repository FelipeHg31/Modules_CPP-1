/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 17:16:20 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/11 02:16:22 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name(" ")
{
    for (int i=0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const std::string name): name(name)
{
    for (int i=0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character& other): name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete (this->inventory[i]);
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i=0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
            delete (this->inventory[i]);
    }
}

std::string const & Character::getName() const 
{
   return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
            this->inventory[idx]->use(target);
    }
}



