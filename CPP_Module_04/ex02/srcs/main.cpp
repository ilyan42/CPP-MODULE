/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:58:14 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 18:55:29 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	std::cout << "CONSTRUCTOR/DESTRUCTOR ANIMAL ARRAY\n" << std::endl;
	Animal *animal[10];

	for(int i = 0; i < 5 ; i++)
	{
		std::cout << std::endl << "----CONSTRUCTEURS----" << std::endl;
		if(i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << std::endl << "----CRI----" << std::endl;
		animal[i]->makeSound();
	}
	for(int i = 0; i < 5 ; i++)
	{
		delete animal[i];
	}
	std::cout << "\n-----DEPP COPY-----\n" << std::endl;
	Cat *Cat1 = new Cat();
	Cat1->printIdeas();
	Cat *Cat2 = new Cat(*Cat1);
	delete Cat1;
	Cat2->printIdeas();
	delete Cat2;
}

// new Animal();