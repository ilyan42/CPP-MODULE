/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:29:48 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/16 18:38:45 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <string>
#include <sstream>

enum Type {CHAR, DOUBLE, INT, FLOAT, UNKNOW_TYPE, INF_NEG, INF, NAN_NEG, NAN};

class ScalarConverter
{
	public :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter &operator=(ScalarConverter const &copy);
		static void convert(const std::string &literal);
};

Type getType(const std::string &literal);
bool VerifSyntax(const std::string &literal);

#endif