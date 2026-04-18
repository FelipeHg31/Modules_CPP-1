/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:10 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/25 15:46:31 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneNumber
{
    private:
        Contact *agenda;
        int num_contacts;
    
    public:
        PhoneNumber();
        void add_contact(Contact cont);
        void get_contact(int id);
        void set_info_contact();
        void ft_show_cont(int id);
        void ft_show_agenda();
        static bool ft_is_number(std::string str);
};

#endif