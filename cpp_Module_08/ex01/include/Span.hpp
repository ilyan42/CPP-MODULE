/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:38:10 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 19:15:56 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _vec;
	public:
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();
		Span &operator=(Span const &copy);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		class FullContainerException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

#endif