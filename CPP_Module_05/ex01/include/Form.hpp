/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:43:00 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/21 18:29:12 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class Form
{
	private :
		std::string const _name;
		bool _signed;
		int const _gradExecute;
		int const _gradRequired;
	public :
		~Form();
		Form(std::string const _name, int const gradExecute, int const gradRequired);
		Form(Form const &copy);
		Form &operator=(Form const & copy);
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
};

std::ostream &operator<<(std::ostream &out, Form const &value);

#endif