/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:41:47 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/11 03:42:46 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const std::string type);
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif