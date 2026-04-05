/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 21:12:54 by juan-her          #+#    #+#             */
/*   Updated: 2026/04/05 20:10:28 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int main(int ac, char **ag)
{   
    if (ac < 2)
        return (1);
    
    DiamondTrap youu = DiamondTrap(ag[1]);

    youu.attack("Segundo");
    youu.takeDamage(8);
    youu.beRepaired(5);
    youu.takeDamage(15);
    youu.guardGate();
    youu.highFivesGuys();
    youu.whoAmI();
}