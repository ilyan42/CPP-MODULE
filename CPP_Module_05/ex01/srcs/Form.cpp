/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:44:16 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/21 18:34:34 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(std::string const _name, int const gradExecute, int const gradRequired) : _name(_name), _signed(false), _gradExecute(gradExecute), _gradRequired(gradRequired)
{
	if (gradExecute > 150 || gradRequired > 150)
		throw (GradeTooLowException());
	else if (gradRequired < 1 || gradExecute < 1)
		throw (GradeTooHighException());
		
}

Form::~Form() {}

Form::Form(Form const & copy) : _name(copy._name), _gradExecute(copy._gradExecute), _gradRequired(copy._gradRequired)
{
	*this = copy;
}

Form &Form::operator=(Form const & copy)
{
	if (this != &copy)
	{
		this->_signed = copy._signed;
	}
	return (*this);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradRequired)
		this->_signed = true;
	else
		throw (GradeTooLowException());
}

//  GET  //

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradExecute() const
{
	return (this->_gradExecute);
}

int Form::getGradRequired() const
{
	return (this->_gradRequired);
}

//  THROW  //

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

// operator << //

std::ostream &operator<<(std::ostream &os, Form const &value)
{
	os << value.getName() << ", Form grade to Signed " << value.getGradRequired()
	<< ", Form grade Execute " << value.getGradExecute()
	<< ", Form is signed " << value.getSigned() << std::endl;
	return (os);
}