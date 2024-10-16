/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:20:22 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/15 15:32:04 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

void	sectionTitle(const std::string& title)
{
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(Bureaucrat &bureaucrat, AForm &form)
{
	std::cout << form;
	bureaucrat.executeForm(form);
}

int main()
{
	Intern someRandomIntern;
	Bureaucrat burro("John", 1);
	try
	{
		sectionTitle("Creating Robotomy Request Form");
		AForm &form1 = someRandomIntern.makeForm("robotomy request", "Bender");
		testForm(burro, form1);
		delete &form1;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error creating or executing Robotomy Request Form: " << e.what() << std::endl;
	}
	try
	{
		sectionTitle("Creating Shrubbery Creation Form");
		AForm &form2 = someRandomIntern.makeForm("shrubbery creation", "Bender");
		testForm(burro, form2);
		delete &form2;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error creating or executing Shrubbery Creation Form: " << e.what() << std::endl;
	}
	return 0;
}
