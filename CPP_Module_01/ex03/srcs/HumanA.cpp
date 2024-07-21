/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:07:23 by ilbendib          #+#    #+#             */
/*   Updated: 2024/07/10 19:29:52 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << this->name << " has creat with " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}