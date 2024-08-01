/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:43:07 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 15:09:29 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "constructor FrapTrap called" << std::endl;
	_name = "FrapTrap";
	_hit = 100;
	_energy = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap()
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other) 
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	_name = other._name;
	_energy = other._energy;
	_hit = other._hit;
	_attack_damage = other._attack_damage;
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap \"" << this->_name << "\" requests a high five!" << std::endl;
}


