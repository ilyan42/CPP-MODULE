/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:40:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/25 14:17:41 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string Contact::get_first_name(void)
{
	return (_first_name);
}

std::string Contact::get_last_name(void)
{
	return (_last_name);
}

std::string Contact::get_nickname(void)
{
	return (_nickname);
}

std::string Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}

void Contact::init_contact(PhoneBook &phonebook)
{
	(void)phonebook;
	std::string str = "";

	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your first name : ";
		if (std::getline(std::cin, str) && str != "")
			_first_name = str;
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your last name : ";
		if (std::getline(std::cin, str) && str != "")
			_last_name = str;
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your nickname : ";
		if (std::getline(std::cin, str) && str != "")
			_nickname = str;
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your phone number : ";
		if (std::getline(std::cin, str) && str != "")
			_phone_number = str;
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter your darkest secret : ";
		if (std::getline(std::cin, str) && str != "")
			_darkest_secret = str;
	}
}

void Contact::display_contact(int index)
{
	std::string str = intToString(index);
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << (formatString(str).substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << (formatString(_first_name).substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << (formatString(_last_name).substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') << (formatString(_nickname).substr(0, 10));
	std::cout << "|";
	std::cout << std::endl;
}
