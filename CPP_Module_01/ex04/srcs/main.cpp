/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:53:45 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/07/10 19:55:02 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.hpp"
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace filename string_to_replace string_to_replace_with" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string to_replace = av[2];
	std::string replace_with = av[3];
	std::string line;
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}
	std::ofstream output_file(filename + ".replace");
	if (!output_file.is_open())
	{
		std::cerr << "Error: could not create output file" << std::endl;
		return 1;
	}
	while (std::getline(file, line))
	{
		output_file << replace_string(line, to_replace, replace_with) << std::endl;
	}
	file.close();
	output_file.close();
	return 0;
}
