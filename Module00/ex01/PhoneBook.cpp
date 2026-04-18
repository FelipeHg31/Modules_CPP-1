/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:07 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/25 18:23:50 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneNumber::PhoneNumber()
{
    this->agenda = new Contact[8];
    this->num_contacts = 0;
}

void PhoneNumber::add_contact(Contact cont)
{
    if (num_contacts < 8)
    {
        this->agenda[this->num_contacts] = cont;
        this->num_contacts++;
    }
    else
        this->agenda[this->num_contacts - 1] = cont;
}

void PhoneNumber::get_contact(int id)
{
    int id_t;

    id_t = id - 1;
    if ((id_t < 0 || id_t >= this->num_contacts) || this->agenda[id_t].get_first().empty())
        std::cout << "Id incorrect." << std::endl;
    else
        this->agenda[id_t].ft_show();
}

std::string ft_set_data(std::string camp)
{
    std::string str;

    while (true)
    {
        std::cout << "Enter " << camp << ": " << std::endl;

        if (!std::getline(std::cin, str))
        {
            std::cin.clear();
            return "";
        }
        if (!str.empty())
            return str;
        std::cout << "Field cannot be empty." << std::endl;
    }
}

void PhoneNumber::set_info_contact()
{
    Contact cont;

    std::string input;

    input = ft_set_data("First Name");
    if (input.empty()) 
        return ;
    cont.set_first(input);
    input = ft_set_data("Second Name");
    if (input.empty()) 
        return;
    cont.set_sec(input);
    do
    {
        input = ft_set_data("Phone Number");
        if (input.empty()) 
            return ;
        cont.set_phone(input);
    }
    while (PhoneNumber::ft_is_number(cont.get_phone()));
    input = ft_set_data("Nickname");
    if (input.empty()) return;
    cont.set_nick(input);
    input = ft_set_data("Dark Secret");
    if (input.empty()) return;
    cont.set_dark(input);
    add_contact(cont);
}

void ft_print(std::string str)
{
    if (str.length() < 10)
    {
        for (int i = str.length(); i < 10; i++)
            std::cout << " ";
        std::cout << str << "|";
    }
    else if(str.length() == 10)
        std::cout << str << "|";
    else
        std::cout << str.substr(0, 9) << ".|";
}

void PhoneNumber::ft_show_cont(int id)
{
    std::string str;
    int id_r;
    
    id_r = id + 1;
    std::cout << "\n";
    std::cout << "         " << id_r << "|";
    ft_print(this->agenda[id].get_first());
    ft_print(this->agenda[id].get_sec());
    ft_print(this->agenda[id].get_nick());
    std::cout<< std::endl;
}

void PhoneNumber::ft_show_agenda()
{
    std::cout << "\n";
    std::cout << "        ID|";
    std::cout << "First Name|";
    std::cout << "Second Na.|";
    std::cout << "  Nickname|" << std::endl;
    for (int i = 0; i < this->num_contacts; i++)
        ft_show_cont(i);
    std::cout << "Enter ID: " << std::endl;
}

bool PhoneNumber::ft_is_number(std::string str)
{
    for (size_t i=0; i < str.size(); i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            std::cout << "The phone number must contain only numbers." << std::endl;
            return (true);
        }
    }
    if (str.size() != 9)
    {
        std::cout << "The length of the phone number is incorrect." << std::endl;
        return (true);
    }
    return (false);
}


