/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:51:18 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 20:01:25 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CPP
# define PRESIDENTIALPARDONFORM_CPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string _target;
	public :
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif