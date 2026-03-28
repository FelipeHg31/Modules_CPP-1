/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 22:43:12 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 23:14:59 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        std::string getType();
        void setType(std::string type);
};

#endif