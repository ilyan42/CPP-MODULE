/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:56:15 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 16:29:43 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return (*this);
}

bool VerifSyntax(const std::string &literal)
{
	bool isValid = true;
	int fcount = 0;
	int dotcount = 0;
	int neg = 0;
	int pos = 0;

	const std::string set = ".f+-";

	for (size_t i = 0; i < literal.length(); ++i)
	{
		char currentChar = literal[i];
		if (currentChar == 'f')
			fcount++;
		if (currentChar == '.')
			dotcount++;
		if (currentChar == '-')
			neg++;
		if (currentChar == '+')
			pos++;
		if (!std::isdigit(currentChar) && set.find(currentChar) == std::string::npos)
		{
			isValid = false;
			return (isValid);
		}
	}
	if (fcount > 1)
		isValid = false;
	if (dotcount > 1)
		isValid = false;
	if (neg > 1 || pos > 1)
		isValid = false;
	std::cout << fcount << dotcount << neg << pos << std::endl;
	return (isValid);
}

Type getType(const std::string &literal)
{
	if (literal == "+inf")
		return (INF);
	else if (literal == "-inf")
		return (INF_NEG);
	else if (literal.length() == 1 && std::isalpha(literal[0]))
		return (CHAR);
	else if (literal[literal.length() - 1] == 'f' && std::string::npos)
		return (FLOAT);
	else if (literal.find('.') != std::string::npos)
		return (DOUBLE);
	else if (literal.find('.') == std::string::npos && literal.find('f') == std::string::npos)
		return (INT);
	else if (literal == "nan")
		return (NAN);
	else
		return(UNKNOW_TYPE);
}

void ScalarConverter::convert(const std::string &literal)
 {
	if (VerifSyntax(literal) == false)
	{
		std::cout << "error syntax detected" << std::endl;
	}
	Type detect_type = getType(literal);
	std::cout << detect_type << std::endl;
	switch (detect_type)
	{
		case CHAR:
		{
			char charValue = literal[0];
			std::cout << "char: '" << charValue << "'" << std::endl;
			int intValue = static_cast<int>(charValue);
			float floatValue = static_cast<float>(charValue);
			double doubleValue = static_cast<double>(charValue);
			std::cout << "int: " << intValue << std::endl;
			std::cout << "float: " << floatValue << "f" << std::endl;
			std::cout << "double: " << doubleValue << std::endl;
			break;
		}
		case INT:
		{
			int intValue = strtol(literal.c_str(), NULL, 10);
			char charValue = static_cast<char>(intValue);
			float floatValue = static_cast<float>(intValue);
			double doubleValue = static_cast<double>(intValue);
			if (intValue >= 1 && intValue <= 127)
				std::cout << "char: '" << charValue << "'" << std::endl;
			else
				std::cout << "char: Non affichable" << std::endl;
			std::cout << "int: " << intValue << std::endl;
			std::cout << "float: " << floatValue << "f" << std::endl;
			std::cout << "double: " << doubleValue << std::endl;
			break;
		}
		case FLOAT:
		{
			float floatValue = strtof(literal.c_str(), NULL);
			int intValue = static_cast<int>(floatValue);
			double doubleValue = static_cast<double>(floatValue);
			char charValue = static_cast<char>(intValue);
			if (floatValue >= 1 && floatValue <= 127)
				std::cout << "char: '" << charValue << "'" << std::endl;
			else
				std::cout << "char: Non affichable" << std::endl;
			std::cout << "int: " << intValue << std::endl;
			if (literal.find('.') != std::string::npos)
			{
				size_t pos = literal.find('.');
				if (pos + 1 < literal.length() && literal[pos + 1] == '0' && (pos + 2 == literal.length() || literal[pos + 2] == 'f'))
					std::cout << "float: " << floatValue << ".0f" << std::endl;
				else
					std::cout << "float: " << floatValue << "f" << std::endl;
			}
			else
				std::cout << "float: " << floatValue << "f" << std::endl;
			if (literal.find('.') != std::string::npos)
			{
				size_t pos = literal.find('.');
				if (pos + 1 < literal.length() && literal[pos + 1] == '0' && (pos + 2 == literal.length() || literal[pos + 2] == 'f'))
					std::cout << "double: " << doubleValue << ".0" << std::endl;
				else
					std::cout << "double: " << doubleValue << std::endl;
			}
			else
				std::cout << "double: " << doubleValue << std::endl;
			break;
		}

		case DOUBLE:
		{
			double doubleValue = strtod(literal.c_str(), NULL);
			int intValue = static_cast<int>(doubleValue);
			char charValue = static_cast<char>(intValue);
			if (doubleValue >= 1 && doubleValue <= 127)
				std::cout << "char: '" << charValue << "'" << std::endl;
			else
				std::cout << "char: Non affichable" << std::endl;

			std::cout << "int: " << intValue << std::endl;
			if (literal.find('.') != std::string::npos)
			{
				size_t pos = literal.find('.');
				if (pos + 1 < literal.length() && literal[pos + 1] == '0' && (pos + 2 == literal.length() || literal[pos + 2] == 'f'))
					std::cout << "float: " << doubleValue << ".0f" << std::endl;
				else
					std::cout << "float: " << doubleValue << "f" << std::endl;
			}
			else
				std::cout << "float: " << doubleValue << "f" << std::endl;
			if (literal.find('.') != std::string::npos) {
				size_t pos = literal.find('.');
				if (pos + 1 < literal.length() && literal[pos + 1] == '0' && (pos + 2 == literal.length() || literal[pos + 2] == 'd')) {
					std::cout << "double: " << doubleValue << ".0" << std::endl;
				} else {
					std::cout << "double: " << doubleValue << std::endl;
				}
			} else {
				std::cout << "double: " << doubleValue << std::endl;
			}

			break;
		}
		case NAN:
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : Impossible" << std::endl;
			std::cout << "float : nanf" << std::endl;
			std::cout << "double : nan" << std::endl;
			break ;
		}
		case INF :
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : Impossible" << std::endl;
			std::cout << "float : inff" << std::endl;
			std::cout << "double : inf" << std::endl;
			break ;
		}
		case INF_NEG :
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : Impossible" << std::endl;
			std::cout << "float : -inff" << std::endl;
			std::cout << "double : -inf" << std::endl;
			break ;
		}
		default:
			std::cout << "Conversion impossible" << std::endl;
			break;
	}
}