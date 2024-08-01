/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:14:25 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 17:24:56 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "constructor WrongCat called" << std::endl;
	_type = "Wrong Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	std::cout << "copy constructor WrongCat called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "operator asignation called" << std::endl;
	this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "the " << _type << " roar" << std::endl;
}