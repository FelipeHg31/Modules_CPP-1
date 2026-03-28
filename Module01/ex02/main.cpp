/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 20:57:03 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/26 22:39:45 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "The memory address of the string variable " << &str << std::endl;
    std::cout << "The memory address held by stringPTR " << &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of the string " << str << std::endl;
    std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF " << stringREF << std::endl;

    return (0);
}