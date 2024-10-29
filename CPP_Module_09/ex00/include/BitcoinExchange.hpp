/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:35:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/26 23:31:49 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <climits>
#include <cstdlib>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange
{
	private :
		std::map<std::string, double> _data;
		std::string _nb_btc;
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &copy);
		// std::string display(std::string &str);
		bool getNbBtc(const char *filename);
		int getBtcValue(std::string date, int &value);
		bool btcValueWithTheNbBtc(char *fileName);
		double readBTCValueFromFile(const std::string &filename, const std::string &_date);
};

bool isValidDate(const std::string& date);
bool checkIntMax(const std::string &str);

#endif