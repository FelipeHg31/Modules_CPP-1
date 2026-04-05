/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 21:12:54 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/05 20:07:40 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int ac, char **ag)
{   
    if (ac != 2)
        return (1);
    
    ScavTrap f = ScavTrap(ag[1]);

    f.attack("Segundo");
    f.takeDamage(8);
    f.beRepaired(5);
    f.takeDamage(15);
    f.guardGate();
}