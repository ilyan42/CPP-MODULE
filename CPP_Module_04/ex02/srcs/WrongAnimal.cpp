/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:14:34 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 17:29:09 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "constructor WrongAnimal called" << std::endl;
	this->_type = "Wrong lion";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "copy constructor WrongAnimal called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "operator asignation called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "the " << _type << " roar" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}