/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:32:04 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/10/29 23:11:46 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy)
{
	*this = copy;
}

RPN &RPN::operator=(RPN const &copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return (*this);
}

bool RPN_parseString(std::string str)
{
	int nb_count = 0;
	int op_count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			nb_count++;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			op_count++;
	}
	if (nb_count != op_count + 1)
		return (false);
	return (true);
}

int RPN::RPN_calculate(std::string str)
{
	std::stack<int> stack;
	std::cout << "str: " << str << std::endl;
	if (RPN_parseString(str) == false)
	{
		std::cout << "Error: Invalid string." << std::endl;
		return (0);
	}
	std::cout << "str: " << str << std::endl;
	for (size_t i = 0; i < str.length(); i++)
	{
		
	}
	std::cout << stack.top() << std::endl;
	return (1);
}