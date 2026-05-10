/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:10:13 by juan-her          #+#    #+#             */
/*   Updated: 2026/05/10 18:11:27 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* animals[100];

    for (int i = 0; i < 50; i++)
        animals[i] = new Dog();
    for (int i = 50; i < 100; i++)
        animals[i] = new Cat();
    
    for (int i = 0; i < 100; i++)
    {
        animals[i]->makeSound();
        animals[i]->getType();
    }
    for (int i = 0; i < 100; i++)
        delete animals[i];
    std::cout << "Animals separated" << std::endl;
    delete j;
    delete i;
    return 0;
}
