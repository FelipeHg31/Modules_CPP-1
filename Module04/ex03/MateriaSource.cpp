/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 02:08:19 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/11 03:54:33 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
    for(int i=0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other): IMateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (other.materias[i])
            this->materias[i] = other.materias[i]->clone();
        else
           this->materias[i] = NULL;        
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete (this->materias[i]);
            if (other.materias[i] != NULL)
                this->materias[i] = other.materias[i]->clone();
            else
                this->materias[i] = NULL;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->materias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;

    for(int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
            return (this->materias[i]->clone());
    }
    return (0);
}
