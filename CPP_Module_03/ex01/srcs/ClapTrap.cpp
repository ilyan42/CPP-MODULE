/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:13:42 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 13:38:48 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = copy._name;
	this->_energy = copy._energy;
	this->_hit = copy._hit;
	this->_attack_damage = copy._attack_damage;
	return (*this);
}


void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	if (this->_energy > 0)
		this->_energy -= 1;
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage! Now has " << _hit << " points." << std::endl;
	if (this->_hit > 0)
		this->_hit -= amount;
	else
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of energy! Now has " << _hit << " points of energy"<< std::endl;
	if (this->_energy < 10)
		this->_energy += amount;
	else
		std::cout << "ClapTrap " << this->_name << " is full of energy!" << std::endl;
}