/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:23:35 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 20:25:53 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) : AForm(copy), _target(copy._target)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
	if (this != &copy)
	{
		
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int i = 0;
	if (this->getSigned() == true && this->getGradRequired() >= executor.getGrade()  && i % 2 == 0)
	{
		std::cout << "brbrbrbrbrbrbr " << this->getTarget() << "are robotise" << std::endl;
	}
	else
		std::cout << "the robotomy failed.";
}