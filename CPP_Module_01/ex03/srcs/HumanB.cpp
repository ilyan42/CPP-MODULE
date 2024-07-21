/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:07:26 by ilbendib          #+#    #+#             */
/*   Updated: 2024/07/10 19:22:51 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << name << " has been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " is dead" << std::endl;
}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}