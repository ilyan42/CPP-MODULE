/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:20:22 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/21 18:28:09 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bureaucrat", 150);
	std::cout << b.getName() << std::endl;
	std::cout << b.getGrade() << std::endl;
	try
	{
		b.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b.getGrade() << std::endl;
	try
	{
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b.getGrade() << std::endl;
	try
	{
		b.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b.getGrade() << std::endl;
	return 0;
}
