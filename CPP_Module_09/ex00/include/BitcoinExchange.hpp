/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:35:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/25 20:13:22 by ilbendib         ###   ########.fr       */
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
		std::map<std::string, std::string> _data;
		std::string _nb_btc;
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &copy);
		std::string display(std::string &str);
		std::string getNbBtc(const char *filename);
		bool getBtcValue(std::string date, int &value);
		bool btcValueWithTheNbBtc(char *fileName);
};

bool isValidDate(const std::string& date);
bool checkIntMax(const std::string &str);


#endif