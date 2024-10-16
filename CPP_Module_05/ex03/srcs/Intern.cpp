/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:09:38 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/15 15:16:58 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern &Intern::operator=(Intern const & copy)
{
	if (this != &copy)
	{}
	return (*this);
}

FormType getFormType(const std::string &FormType)
{
	if (FormType == "robotomy request")
        return ROBOTOMY_REQUEST;
    else if (FormType == "shrubbery creation")
        return SHRUBBERY_CREATION;
    else if (FormType == "presidential pardon")
        return PRESIDENTIAL_PARDON;
    else
        return UNKNOWN_FORM;
}

AForm &Intern::makeForm(const std::string &name_form, const std::string &target_form)
{
	FormType formType = getFormType(name_form);
	switch (formType)
	{
		case ROBOTOMY_REQUEST:
			std::cout << "Intern creates Robotomy Request Form" << std::endl;
			return *(new RobotomyRequestForm(target_form));  // Retourne une référence
		case SHRUBBERY_CREATION:
			std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
			return *(new ShrubberyCreationForm(target_form));  // Retourne une référence
		case PRESIDENTIAL_PARDON:
			std::cout << "Intern creates Presidential Pardon Form" << std::endl;
			return *(new PresidentialPardonForm(target_form));  // Retourne une référence
		default:
			throw std::invalid_argument("Error: Unknown form type!");
	}
}