/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:09:39 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 05:57:15 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const std::string type);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        const std::string getType() const;
};

#endif
