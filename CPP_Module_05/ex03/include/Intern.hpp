/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:02:27 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/15 15:15:23 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


enum FormType { ROBOTOMY_REQUEST, SHRUBBERY_CREATION, PRESIDENTIAL_PARDON, UNKNOWN_FORM };


class Intern
{
	public :
		Intern();
		~Intern();
		Intern(Intern const& copy);
		Intern &operator=(Intern const &copy);
		AForm &makeForm(const std::string &name_form, const std::string &target_form);
};

FormType getFormType(const std::string &FormType);

#endif