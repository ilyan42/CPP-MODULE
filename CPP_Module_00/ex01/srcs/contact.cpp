/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:40:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/20 19:20:19 by ilbendib         ###   ########.fr       */
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
	// while (this->_first_name.empty())
	// {
	// 	if (!std::cin.good())
	// 		return;
		std::cout << "Enter your first name : ";
		std::getline(std::cin, _first_name);
	// }
	// while (this->_last_name.empty())
	// {
	// 	if (!std::cin.good())
	// 		return;
		std::cout << "Enter your last name : ";
		std::getline(std::cin, _last_name);
	// }
	// while (this->_nickname.empty())
	// {
	// 	if (!std::cin.good())
	// 		return;
		std::cout << "Enter your nickname : ";
		std::getline(std::cin, _nickname);
	// }
	// while (this->_phone_number.empty())
	// {
	// 	if (!std::cin.good())
	// 		return;
		std::cout << "Enter your phone number : ";
		std::getline(std::cin, _phone_number);
	// }
	// while (this->_darkest_secret.empty())
	// {
	// 	if (!std::cin.good())
	// 		return;
		std::cout << "Enter your darkest secret : ";
		std::getline(std::cin, _darkest_secret);
	// }
		phonebook.increment_index();
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
