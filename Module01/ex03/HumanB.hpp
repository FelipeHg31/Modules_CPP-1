/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 22:42:40 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/27 00:09:56 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void attack();
        std::string getName();
        void setName(std::string name);
        Weapon getWeapon();
        void setWeapon(Weapon& weapon);
};

#endif