/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:24:29 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/30 16:51:18 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>
#include <deque>

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 9);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found" << std::endl;
	}
	return 0;
}