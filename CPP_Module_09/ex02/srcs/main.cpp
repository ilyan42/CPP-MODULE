/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:31 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/31 18:27:48 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <sstream>

int	checkArgs(char **av)
{
	std::vector<long long int> arr;
	
	for (int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
		arr.push_back(std::atoll(av[i]));
	}
	for (size_t i = 0; i < arr.size() - 1; i++)
	{
		if (arr[i] < 0 || arr[i] > 2147483647)
			return (1);
	}
	return (0);
}

void PmergeMe::setvector(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		_vector.push_back(std::atoi(av[i]));
	}
	printVector(_vector);
}

std::vector<int> PmergeMe::getVector()
{
	return (_vector);
}


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [string]" << std::endl;
		return 1;
	}
	if (checkArgs(argv))
	{
		std::cout << "Error: Invalid arguments" << std::endl;
		return 1;
	}
	PmergeMe pmergeMe;
	
	// std::vector<int> *str = new std::vector<int>;
	std::vector<int> str;
	pmergeMe.setvector(argv);
	str = pmergeMe.getVector();
	pmergeMe.fordJohnsonAlgo(str);
	return 0;
}
