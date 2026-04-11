/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:51:25 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/11 03:42:40 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const std::string type);
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif