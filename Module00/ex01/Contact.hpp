/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:04 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/24 17:50:08 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{
    private:
        std::string first;
        std::string second;
        std::string nickn;
        std::string phone;
        std::string dark;
    public:
        Contact();
        Contact(std::string first, std::string second, std::string nickn, std::string phone, std::string dark);
        Contact(const Contact& other);
        Contact& operator=(const Contact& other);
        void set_first(std::string str);
        std::string get_first() const;
        void set_sec(std::string str);
        std::string get_sec() const;
        void set_nick(std::string str);
        std::string get_nick() const;
        void set_phone(std::string str);
        std::string get_phone() const;
        void set_dark(std::string str);
        std::string get_dark() const;
        void ft_show();
};

#endif