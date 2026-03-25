/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:00 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/25 15:44:19 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){}

Contact::Contact(std::string first, std::string second, std::string nickn, std::string phone, std::string dark)
{
    this->first = first;
    this->second = second;
    this->nickn = nickn;
    this->phone = phone;
    this->dark = dark;
}
Contact::Contact(const Contact& other)
{
    this->first = other.first;
    this->second = other.second;
    this->nickn = other.nickn;
    this->phone = other.phone;
    this->dark = other.dark;
}

Contact&::Contact::operator=(const Contact& other)
{
    if (this != &other)
    {
        this->first = other.first;
        this->second = other.second;
        this->nickn = other.nickn;
        this->phone = other.phone;
        this->dark = other.dark;
    }
    return (*this);
}

void Contact::set_first(std::string str)
{
    this->first = str;
}

std::string Contact::get_first() const
{
    return (this->first);
}

void Contact::set_sec(std::string str)
{
    this->second = str;
}

std::string Contact::get_sec() const
{
    return (this->second);
}

void Contact::set_nick(std::string str)
{
    this->nickn = str;
}

std::string Contact::get_nick() const
{
    return (this->nickn);
}

void Contact::set_phone(std::string str)
{
    this->phone = str;
}

std::string Contact::get_phone() const
{
    return (this->phone);
}

void Contact::set_dark(std::string str)
{
    this->dark = str;
}

std::string Contact::get_dark() const
{
    return (this->dark);
}

void Contact::ft_show()
{
    std::cout << "First Name: " << this->first << std::endl;
    std::cout << "Second Name: " << this->second << std::endl;
    std::cout << "Nickname: " << this->nickn << std::endl;
    std::cout << "Phone number: " << this->phone << std::endl;
    std::cout << "Dark Secret: " << this->dark << std::endl;
    std::cout << "\n";
}