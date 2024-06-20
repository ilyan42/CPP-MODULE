/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:40:28 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/20 17:28:03 by ilbendib         ###   ########.fr       */
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
		if (input == "EXIT")
			phonebook.exit(running);
		if (input == "ADD")
			phonebook.add();
		if (input == "SEARCH")
			phonebook.search();
		if (!std::cin)
		{
			std::cout << std::endl;
			phonebook.exit(running);
		}
	}
	return (0);
}