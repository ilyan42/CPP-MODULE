/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:44:16 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 18:06:03 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm(std::string const _name, int const gradExecute, int const gradRequired) : _name(_name), _signed(false), _gradExecute(gradExecute), _gradRequired(gradRequired)
{
	if (gradExecute > 150 || gradRequired > 150)
		throw (GradeTooLowException());
	else if (gradRequired < 1 || gradExecute < 1)
		throw (GradeTooHighException());
		
}

AForm::~AForm() {}

AForm::AForm(AForm const & copy) : _name(copy._name), _gradExecute(copy._gradExecute), _gradRequired(copy._gradRequired)
{
	*this = copy;
}

AForm &AForm::operator=(AForm const & copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
	}
	return (*this);
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradRequired)
		this->_signed = true;
	else
		this->_signed = false;
}

//  GET  //

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getGradExecute() const
{
	return (this->_gradExecute);
}

int AForm::getGradRequired() const
{
	return (this->_gradRequired);
}

//  THROW  //

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

// operator << //

std::ostream &operator<<(std::ostream &os, AForm const &value)
{
	os << value.getName() << ", AForm grade to Signed " << value.getGradRequired()
	<< ", AForm grade Execute " << value.getGradExecute()
	<< ", AForm is signed " << value.getSigned() << std::endl;
	return (os);
}