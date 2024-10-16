/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:20:22 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/15 13:42:04 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

void	sectionTitle(const std::string& title)
{
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(Bureaucrat &bureaucrat, AForm &form)
{
	std::cout << form;
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main() 
{
	Bureaucrat	burro("burro", 146);
	Bureaucrat	burro2("burro2", 42);
	std::cout << burro << burro2;

	try {
		{
			sectionTitle("shrubbery creation");
			ShrubberyCreationForm form("home");
			testForm(burro, form);
		}
		{
			sectionTitle("robotomy request");
			RobotomyRequestForm form("Bender");
			testForm(burro, form);
		}
		{
			sectionTitle("presidential pardon");
			PresidentialPardonForm form("lrocca");
			testForm(burro, form);
		}
		PresidentialPardonForm form("lrocca");
		{
			sectionTitle("execute unsigned form");
			std::cout << form;
			burro.executeForm(form);
		}
		{
			sectionTitle("too low to execute");
			burro.signForm(form);
			burro2.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
