/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:55:51 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 16:51:43 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "constructor Dog called" << std::endl;
	type = "dog";
}

Dog::~Dog()
{
	std::cout << "destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "constructor Dog called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "operator asignation called" << std::endl;
	type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "the " << type << " barks" << std::endl;
}