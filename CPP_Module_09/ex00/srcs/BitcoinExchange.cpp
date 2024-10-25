/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:36:16 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/25 20:14:10 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	(void)copy;
	return (*this);
}

bool checkIntMax(const std::string &str)
{
	if (str.length() > 22 || str.length() < 14)
	{
		std::cout << "error argument !" << std::endl;
		return false;
	}
	return true;
}

bool isValidDate(const std::string& date)
{
	if (date.length() < 13 || date[4] != '-' || date[7] != '-' || date[10] != ' ' 
		|| date[11] != '|' || date[12] != ' ' || checkIntMax(date) == false)
	{
		std::cout << "error argument !" << std::endl;
		return false;
	}
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i != 4 && i != 7 && i != 10 && i != 11 && i != 12 && !isdigit(date[i]))
			return false;
	}
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	return day <= daysInMonth[month - 1];
}

std::string trim(const std::string& str)
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last - first + 1));
}

std::string BitcoinExchange::getNbBtc(const char *filename)
{
	std::ifstream file(filename);
	std::string _nb_btc;
	if (!file.is_open())
	{
		std::cout << "error argument !" << std::endl;
		return NULL;
	}
	std::string line;
	while (std::getline(file, line))
	{
		if (isValidDate(line) == false)
			return NULL;
		std::istringstream iss(line);
		std::string date;
		
		if (!std::getline(iss, date, '|') || !std::getline(iss, _nb_btc))
		{
			std::cout << "Invalid data format in line: " << line << std::endl;
			return NULL;
		}
		date = trim(date);
		_nb_btc = trim(_nb_btc);
		std::cout << date << " _nb_btc " << _nb_btc << std::endl;
		int value = std::atoi(_nb_btc.c_str());
		this->_data[date] = value;
		this->_nb_btc = _nb_btc;
	}
	file.close();
	return NULL;
}

bool BitcoinExchange::getBtcValue(std::string _date, int &value)
{
	std::ifstream file("data.csv");
	if (!file.is_open())
	{
		std::cout << "error argument !" << std::endl;
		return false;
	}
	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string nb_btc;
		if (!std::getline(iss, date, ',') || !std::getline(iss, nb_btc))
		{
			std::cout << "Invalid data format in line: " << line << std::endl;
			return false;
		}
		date = trim(date);
		nb_btc = trim(nb_btc);
		if (date == _date)
		{
			value = std::atoi(nb_btc.c_str());
			return true;
		}
	}
	return false;
}


bool BitcoinExchange::btcValueWithTheNbBtc(char *fileName)
{
	std::string nb_btc = getNbBtc(fileName);
	std::cout << "nb_btc = " << nb_btc << std::endl;
	return true;
}



