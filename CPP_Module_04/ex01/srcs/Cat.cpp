/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:50:54 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 16:51:11 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "constructor Cat called" << std::endl;
	type = "cat";
}

Cat::~Cat()
{
	std::cout << "destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "operator asignation called" << std::endl;
	type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "the " << type << " meows" << std::endl;
}
