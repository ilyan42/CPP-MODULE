/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:29:05 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 19:39:54 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :
		std::string _target;
	public :
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};

#endif