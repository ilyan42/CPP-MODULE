/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:35:37 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/10/29 19:11:08 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./RPN [string]" << std::endl;
		return 1;
	}
	RPN rpn;
	std::string str = argv[1];
	rpn.RPN_calculate(str);
	return 0;
}
