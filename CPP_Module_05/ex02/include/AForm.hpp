/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:43:00 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/14 19:39:19 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <ostream>
#include <fstream>

class Bureaucrat;

class AForm
{
	private :
		std::string const _name;
		bool _signed;
		int const _gradExecute;
		int const _gradRequired;
	public :
		~AForm();
		AForm(std::string const _name, int const gradExecute, int const gradRequired);
		AForm(AForm const &copy);
		AForm &operator=(AForm const & copy);
		std::string getName() const;
		bool getSigned() const;
		int getGradExecute() const; 
		int getGradRequired() const;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		void beSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &value);

#endif