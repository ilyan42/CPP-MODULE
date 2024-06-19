/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:11:27 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/06/19 19:36:12 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"
#include "../include/header.hpp"

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

void Contact::init_contact(void)
{
	while (this->_first_name.empty())
	{
		std::cout << "Enter your first name : ";
		std::getline(std::cin, _first_name);
	}
	while (this->_last_name.empty())
	{
		std::cout << "Enter your last name : ";
		std::getline(std::cin, _last_name);
	}
	while (this->_nickname.empty())
	{
		std::cout << "Enter your nickname : ";
		std::getline(std::cin, _nickname);
	}
	while (this->_phone_number.empty())
	{
		std::cout << "Enter your phone number : ";
		std::getline(std::cin, _phone_number);
	}
	while (this->_darkest_secret.empty())
	{
		std::cout << "Enter your darkest secret : ";
		std::getline(std::cin, _darkest_secret);
	}
}

void PhoneBook::add(void)
{
	static int i;

	while (this->_index < 8)
		this->_index++;
	if (i < 8)
	{
		_contact[i].init_contact();
		i++;
	}
	else
	{
		std::cout << "The phonebook is full" << std::endl;
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
    {
        return str.substr(0, 10 - 1) + '.';
    }
    else
    {
        return str;
    }
}


void PhoneBook::search(Contact contact[8])
{
	PhoneBook phonebook;

	_display();
	for (int i = 0; i < _index; i++)
	{
		
	}
}

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}