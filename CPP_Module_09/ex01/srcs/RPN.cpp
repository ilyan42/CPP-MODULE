/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:32:04 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/10/30 15:45:56 by ilbendib         ###   ########.fr       */
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
		if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != ' ')
			return (false);
		if (isdigit(str[i]) && str[i + 1] != ' ')
			return (false);
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			nb_count++;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			op_count++;
		else if (str[str.length() - 1] != '+' && str[str.length() - 1] != '-' &&
			str[str.length() - 1] != '*' && str[str.length() - 1] != '/')
			return (false);
	}
	if (nb_count != op_count + 1)
		return (false);
	return (true);
}

int RPN::RPN_calculate(std::string str)
{
	std::stack<int> stack;
	int a = 0;
	int b = 0;
	if (RPN_parseString(str) == false)
	{
		std::cout << "Error: Invalid string." << std::endl;
		return (0);
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		if (isdigit(str[i]))
			stack.push(str[i] - '0');
		else if (str[i] == '+')
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(a + b);
		}
		else if (str[i] == '-')
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(b - a);
		}
		else if (str[i] == '*')
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			stack.push(a * b);
		}
		else if (str[i] == '/')
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			if (a == 0)
			{
				std::cout << "Error: Division by zero." << std::endl;
				return (0);
			}
			stack.push(b / a);
		}
	}
	std::cout << stack.top() << std::endl;
	return (1);
}