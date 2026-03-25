/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:55:00 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/25 15:56:07 by juan-her         ###   ########.fr       */
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

    id = 0;
    std::cout<< "Welcome to your Phone Book!" << std::endl;
    std::cout<< "Options: \n1. ADD.\n2. SEARCH.\n3. EXIT." << std::endl;
    std::getline(std::cin, cmd);
    while (cmd.compare("EXIT") != 0 || cmd.empty())
    {
        if (cmd.compare("ADD") == 0)
            phone.set_info_contact();
        else if (cmd.compare("SEARCH") == 0)
        {
            phone.ft_show_agenda();
            std::getline(std::cin, cmd);
            id = atoi(cmd.c_str());
            phone.get_contact(id);
        }
        else if (cmd.compare("EXIT") != 0)
            std::cout<< "\nIncorrect option" << std::endl;
        std::cout<< "\n\tyour Phone Book" << std::endl;
        std::cout<< "Options: \n1. ADD.\n2. SEARCH.\n3. EXIT." << std::endl;
        std::getline(std::cin, cmd);
    }
    return (0);
}