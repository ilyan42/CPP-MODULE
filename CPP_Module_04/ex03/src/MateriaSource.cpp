/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:11:37 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 18:18:49 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_source[i];
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& copy)
{
	std::cout << "assignation operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			this->_source[i] = copy._source[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "there is no materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_source[i])
		{
			this->_source[i] = m;
			return ;
		}
	}
	std::cout << "inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] && this->_source[i]->getType() == type)
		{
			return (this->_source[i]->clone());
		}
	}
	return (0);
}