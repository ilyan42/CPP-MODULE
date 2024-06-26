/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:07:30 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/26 15:11:50 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

weapon::weapon(std::string type)
{
	this->type = type;
}

weapon::~weapon() {}

const std::string &weapon::getType(void)
{
	return (this->type);
}

void weapon::setType(std::string type)
{
	this->type = type;
}