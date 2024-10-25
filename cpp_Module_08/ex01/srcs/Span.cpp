/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:42:58 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 19:16:13 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int n)
{
	this->_n = n;
	this->_vec.reserve(n);
}

Span::~Span() {}

Span::Span(Span const &copy) 
{
	this->_n = copy._n;
	this->_vec = copy._vec;
	*this = copy;
}

Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		this->_n = copy._n;
		this->_vec = copy._vec;
	}
	return *this;
}


void Span::addNumber(int n)
{
	if (this->_vec.size() == this->_n)
		throw FullContainerException();
	this->_vec.push_back(n);
}

void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_vec.size() + std::distance(begin, end) > this->_n)
		throw FullContainerException();
	this->_vec.insert(this->_vec.end(), begin, end);
}

int Span::shortestSpan()
{
	if (this->_vec.size() < 2)
		throw NoSpanException();
	std::sort(this->_vec.begin(), this->_vec.end());
	int min = this->_vec[1] - this->_vec[0];
	for (unsigned int i = 1; i < this->_vec.size(); i++)
	{
		if (this->_vec[i] - this->_vec[i - 1] < min)
			min = this->_vec[i] - this->_vec[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if (this->_vec.size() < 2)
		throw NoSpanException();
	std::sort(this->_vec.begin(), this->_vec.end());
	return this->_vec[this->_vec.size() - 1] - this->_vec[0];
}

const char *Span::FullContainerException::what() const throw()
{
	return "Container is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No span to find";
}

