/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:20:19 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/10 19:09:00 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << _name << " bureaucrate constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " bureaucrate destructor called" << std::endl;
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade++;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return os; 
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		if (form.getSigned() == true)
		{
			std::cout << "Bureaucrat a signe" << form << std::endl;
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}