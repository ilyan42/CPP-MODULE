/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:18:34 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/07/30 15:20:48 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int get_index(char *level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		switch (get_index(argv[1])) 
		{
			case 0:
				harl.complain("DEBUG");
				break;
			case 1:
				harl.complain("INFO");
				break;
			case 2:
				harl.complain("WARNING");
				break;
			case 3:
				harl.complain("ERROR");
				break;
			default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		std::cerr << "do ./harl_filter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	return 0;
}