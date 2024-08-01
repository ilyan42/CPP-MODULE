/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:41:23 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 13:28:31 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "constructor ScaveTrap called" << std::endl;
	_name = "ScavTrap";
	_hit = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	_name = other._name;
	_hit = other._hit;
	_energy = other._energy;
	_attack_damage = other._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScaveTrap called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap" << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	if (_energy > 0)
		_energy -= 1;
	else 
		std::cout << "ScavTrap" << this->_name << " is out of energy!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}