/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:43:09 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 16:55:43 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "lion";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "operator asignation called" << std::endl;
	this->type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "the " << type << " roar" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}