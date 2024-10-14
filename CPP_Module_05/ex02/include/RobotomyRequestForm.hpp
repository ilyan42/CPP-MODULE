/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:06:30 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 19:48:35 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private : 
		std::string _target;
	public :
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const& copy);
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};

#endif