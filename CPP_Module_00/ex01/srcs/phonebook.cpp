/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:11:27 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/06/20 19:04:48 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::Welcom_to_chat(void) const
{
	std::cout << "__________________________________________" << std::endl;
	std::cout << "| ADD    : create new contact            |" << std::endl;
	std::cout << "| SEARCH : displays the requested contact|" << std::endl;
	std::cout << "| EXIT   : leave the programe            |" << std::endl;
	std::cout << "|________________________________________|\n" << std::endl;
}

void PhoneBook::exit(bool &running)
{
	std::cout << "Exit PhoneBook" << std::endl;
	running = false;
}

void PhoneBook::add(void)
{
	static int i;

	if (i < 8)
	{
		_contact[i].init_contact(*this);
		std::cout << _index << std::endl;
		i++;
	}
	else
	{
		std::cout << "The phonebook is full" << std::endl;
		std::cout << _index << std::endl;
		i = 0;
	}
}

static void _display()
{
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') <<  (formatString("INDEX").substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') <<  (formatString("FIRST NAME").substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') <<  (formatString("LAST NAME").substr(0, 10));
	std::cout << "|";
	std::cout << std::right << std::setw(10) << std::setfill(' ') <<  (formatString("NICKNAME").substr(0, 10));
	std::cout << "|";
	std::cout << std::endl;
}

std::string formatString(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 10 - 1) + '.';
	else
		return str;
}

std::string intToString(int number)
{
	std::stringstream ss;
	ss << number;
	return ss.str();
}

int PhoneBook::get_index(void)
{
	return _index;
}

int PhoneBook::get_current_index(void)
{
	return _current_index;
}

int PhoneBook::increment_index(void)
{
	_index += 1;
	if (_index > 8)
		_index = 8;
	return _index;
}

void PhoneBook::search(void)
{
	_display();
	for (int i = 0; i < _index; i++)
	{
		_contact[i].display_contact(i);
	}
	std::cout << std::endl;
	std::cout << "Enter the index of the contact you want to display : ";
	std::string contact_index;
	std::getline(std::cin, contact_index);
	if (!std::cin.good())
		return;
	if (contact_index.length() == 1 && isdigit(contact_index[0]))
	{
		int index = contact_index[0] - '0';
		if (index >= 0 && index < _index)
		{
			std::cout << "First name : " << _contact[index].get_first_name() << std::endl;
			std::cout << "Last name : " << _contact[index].get_last_name() << std::endl;
			std::cout << "Nickname : " << _contact[index].get_nickname() << std::endl;
			std::cout << "Phone number : " << _contact[index].get_phone_number() << std::endl;
			std::cout << "Darkest secret : " << _contact[index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Error: index not found" << std::endl;
	}
	else
		std::cout << "Error: index not found" << std::endl;
}


