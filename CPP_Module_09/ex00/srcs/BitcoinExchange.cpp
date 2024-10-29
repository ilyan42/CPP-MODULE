/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:36:16 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/29 18:18:36 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	this->_data = copy._data;
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this != &copy)
	{
		this->_data = copy._data;
		this->_nb_btc = copy._nb_btc;
	}
	return (*this);
}

bool checkIntMax(const std::string &str)
{

	if (str.length() > 13)
	{
		std::string subStr = str.substr(13);
		bool allDigits = true;
		for (size_t i = 0; i < subStr.length(); ++i)
		{
			if (!isdigit(subStr[i]))
			{
				allDigits = false;
				break;
			}
		}
		if (allDigits)
		{
			char *end;
			long value = strtol(subStr.c_str(), &end, 10);
			if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
			{
				std::cout << "Error: number is to large." << std::endl;
				return false;
			}
		}
	}
	else
	{
		std::cout << "String is too short to have an index 13." << std::endl;
		return false;
	}
	return true;
}

bool check_positive_number(const std::string &str)
{
	long value = std::stol(str);
	if (value < 0)
	{
		std::cout << "Error : Not a positive number." << std::endl;
		return false;
	}
	return true;
}

std::string trim(const std::string &str)
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return (first == std::string::npos || last == std::string::npos) ? "" : str.substr(first, last - first + 1);
}
bool isValidDate(const std::string& date)
{
	if (date.length() < 13 || date[4] != '-' || date[7] != '-' || date[10] != ' ' 
		|| date[11] != '|' || date[12] != ' ')
	{
		std::cout << "Error : Bad input => " << date << std::endl;
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

bool BitcoinExchange::getNbBtc(const char *filename)
{
	std::ifstream file(filename);
	std::string _nb_btc;
	if (!file.is_open())
	{
		std::cout << "error argument !" << std::endl;
		return false;
	}
	std::string line;
	while (std::getline(file, line))
	{
		if (isValidDate(line) == false)
			continue;
		if (checkIntMax(line) == false)
			continue;
		if (check_positive_number(line.substr(13)) == false)
			continue;
		std::istringstream iss(line);
		std::string date;
		if (!std::getline(iss, date, '|') || !std::getline(iss, _nb_btc))
		{
			std::cout << "Invalid data format in line: " << line << std::endl;
			return false;
		}
		date = trim(date);
		_nb_btc = trim(_nb_btc);
		double value;
		std::istringstream ss(_nb_btc);
		if (!(ss >> value))
		{
			std::cout << "Conversion failed for value: " << _nb_btc << std::endl;
			return false;
		}
		this->_data[date] = value;
		double btc_value = readBTCValueFromFile("data.csv", date);
		if (btc_value == 0.0) {
			std::cout << "Error: BTC value not found for date: " << date << std::endl;
			return false;
		}
		std::cout << date << " => " << _nb_btc << " = " << (btc_value * value) << std::endl;
	}
	file.close();
	return true;
}

double BitcoinExchange::readBTCValueFromFile(const std::string &filename, const std::string &_date)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cout << "Could not open file: " << filename << std::endl;
		return 0.0;
	}
	std::string line;
	std::map<std::string, double> data;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string nb_btc;

		if (!std::getline(iss, date, ',') || !std::getline(iss, nb_btc))
		{
			std::cout << "Invalid data format in line: " << line << std::endl;
			continue ;
		}
		date = trim(date);
		nb_btc = trim(nb_btc);
		data[date] = std::atof(nb_btc.c_str());
	}
	double value = 0.0;
	std::string closestDate;
	for (std::map<std::string, double>::iterator it = data.begin(); it != data.end(); ++it)
	{
		if (it->first <= _date)
		{
			if (it->first > closestDate)
			{
				closestDate = it->first; // Met à jour la date la plus proche
				value = it->second; // Met à jour la valeur correspondante
			}
		}
	}
	if (closestDate.empty())
		return 0.0;
	return value;
}


bool BitcoinExchange::btcValueWithTheNbBtc(char *fileName)
{
	if (getNbBtc(fileName) == false)
		return false;
	return true;
}



