/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:30:34 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/25 19:43:27 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;

	stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "Address of the string: " << &string << std::endl;
	std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string: " << string << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
	return (0);

}