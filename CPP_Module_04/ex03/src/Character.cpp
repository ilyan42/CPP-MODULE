/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:44:38 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 18:23:01 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character " << this->_name << " was created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::~Character()
{
	std::cout << "Character " << this->_name << " was delete " << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character::Character(Character const & copy)
{
	std::cout << "copy " << this->_name << " called" << std::endl;
	*this = copy;
}

Character& Character::operator=(Character const & copy)
{
	std::cout << "opperator d'assignation called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = copy._inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout <<"\n" << this->_name <<" trie to acces a materia but this materia is not valid\n" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << "equip " << m->getType() << " in index " << i << std::endl;
		
			return ;
		}
	}
	std::cout << "\ninventory is full\n" << std::endl;
	delete m;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == 0)
	{
		std::cout << "\nbad index or there is no material\n" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "bad idx" << std::endl;
	else
	{
		std::cout << "\nunequip " << this->_inventory[idx]->getType() << " from index " << idx << "\n" << std::endl;
		_inventory[idx] = 0;
	}
}