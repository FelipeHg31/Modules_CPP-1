/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:55:00 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/25 16:53:27 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    std::string cmd;
    PhoneNumber phone = PhoneNumber();
    int id;

    do
    {
        id = 0;
        std::cout<< "\n\tyour Phone Book" << std::endl;
        std::cout<< "Options: \n1. ADD.\n2. SEARCH.\n3. EXIT." << std::endl;
        if (!std::getline(std::cin, cmd))
            break ;
        if (cmd.compare("ADD") == 0)
            phone.set_info_contact();
        else if (cmd.compare("SEARCH") == 0)
        {
            phone.ft_show_agenda();
            if (!std::getline(std::cin, cmd))
                break ;
            id = atoi(cmd.c_str());
            phone.get_contact(id);
        }
        else if (cmd.compare("EXIT") != 0)
            std::cout<< "\nIncorrect option" << std::endl;
    }
    while (cmd.compare("EXIT") != 0);
    return (0);
}