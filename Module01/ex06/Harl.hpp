/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 03:14:43 by juan-her          #+#    #+#             */
/*   Updated: 2026/03/28 16:12:45 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        Harl();
        void filter(std::string level);
};

#endif