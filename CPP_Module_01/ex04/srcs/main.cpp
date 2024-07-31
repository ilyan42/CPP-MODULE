/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:53:45 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/07/30 16:49:21 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace_string(const std::string& str, const std::string& from, const std::string& to)
{
	std::string result = str;
	std::string::size_type pos = 0;
	while ((pos = result.find(from, pos)) != std::string::npos)
	{
		result.replace(pos, from.length(), to);
		pos += to.length();
	}
	return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace filename string_to_replace string_to_replace_with" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string to_replace = av[2];
	std::string replace_with = av[3];
	std::string line;
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return 1;
	}

	std::ofstream output_file((filename + ".replace").c_str());
	if (!output_file.is_open())
	{
		std::cout << "Error: could not create output file" << std::endl;
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

