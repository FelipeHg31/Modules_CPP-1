/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:59:42 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 05:58:10 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const std::string ideas[100]);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

};

#endif
