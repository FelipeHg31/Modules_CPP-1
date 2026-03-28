/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:05:09 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 20:28:14 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce();
        void setName(std::string name);
        std::string getName();
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif