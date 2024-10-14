/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:01:35 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 20:25:40 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy), _target(copy._target)
{
	*this = copy;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	if (this != &copy)
	{
		
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == true && this->getGradRequired() >= executor.getGrade())
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}

}