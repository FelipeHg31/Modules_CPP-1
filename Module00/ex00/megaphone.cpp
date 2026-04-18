/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:42:49 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/23 22:41:15 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **ag)
{
    std::string str;
    int len;
    char c;

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        str = ag[i];
        len = str.length();
        for (int j = 0; j < len; j++)
        {
            if (std::isalpha(static_cast<unsigned char> (str[j])) && std::islower(static_cast<unsigned char> (str[j])))
            {
                c = (std::toupper(static_cast<unsigned char> (str[j])));
                std::cout << c;
            }
            else
                std::cout << str[j];
        }
        if (i != ac - 1)
            std::cout << std::endl;
    }
    std::cout << "\n";
    return (0);
}