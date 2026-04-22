/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:05:09 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 19:26:32 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif