/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:07:26 by ilbendib          #+#    #+#             */
/*   Updated: 2024/07/30 14:08:33 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	weapon = NULL;
	std::cout << name << " has been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " is dead" << std::endl;
}

void HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << name << " attacks with his hand" << std::endl;
	}
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}