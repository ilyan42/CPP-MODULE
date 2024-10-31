/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:35:37 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/10/30 15:16:38 by ilbendib         ###   ########.fr       */
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
