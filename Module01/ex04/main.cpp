/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 01:23:53 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/27 02:02:55 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileInfo.hpp"

static void ft_replace(std::string* line, std::string s1, std::string s2)
{
    size_t pos = 0;

    while((pos = line->find(s1, pos)) != std::string::npos)
    {
        line->erase(pos, s1.length());
        line->insert(pos, s2);
        pos += s2.length();
    }
}

int main(int ac, char **ag)
{
    std::string str;
    std::string line;

    if (ac != 4)
        return (1);
    str = ag[1];
    std::ifstream in(str.c_str());
    std::ofstream out((str + ".replace").c_str());
    if (!in.is_open() || !out.is_open())
    {
        std::cout << "Error with files!" << std::endl;
        if (in)
            in.close();
        if(out)
            out.close();
        return (1);
    }
    while(std::getline(in, line))
    {
        ft_replace(&line, ag[2], ag[3]);
        out << line << std::endl;
    }
    in.close();
    out.close();
}