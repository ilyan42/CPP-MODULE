/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:40:28 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/19 19:33:01 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.hpp"

int main()
{
	PhoneBook phonebook;
	bool running = true;
	std::string input;

	phonebook.Welcom_to_chat();
	while (running)
	{
		std::cout << "\033[1;33mEnter your command : \033[0m";
		std::getline(std::cin, input);
		if (!std::cin)
		{
			std::cout << "Error: cin is not good" << std::endl;
			phonebook.exit(running);
		}
		if (input == "EXIT")
			phonebook.exit(running);
		if (input == "ADD")
			phonebook.add();
		if (input == "SEARCH")
			phonebook.search();
	}
	return (0);
}