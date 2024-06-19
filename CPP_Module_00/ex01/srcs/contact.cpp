/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:40:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/19 18:32:31 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

void Contact::get_first_name(void) const
{
	std::cout << "first name : " << _first_name << std::endl;
}

void Contact::get_last_name(void) const
{
	std::cout << "last name : " << _last_name << std::endl;
}

void Contact::get_nickname(void) const
{
	std::cout << "nickname : " << _nickname << std::endl;
}

void Contact::get_phone_number(void) const
{
	std::cout << "phone number : " << _phone_number << std::endl;
}

void Contact::get_darkest_secret(void) const
{
	std::cout << "darkest secret : " << _darkest_secret << std::endl;
}


Contact::Contact(void) {}

Contact::~Contact(void) {}