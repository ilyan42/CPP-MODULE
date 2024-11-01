/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:31 by ilbendib          #+#    #+#             */
/*   Updated: 2024/11/01 14:46:03 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <sstream>
#include <deque>

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
		_nb_count++;
	}
}

void PmergeMe::setDeque(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		_deque.push_back(std::atoi(av[i]));
	}
}

std::deque<int> PmergeMe::getDeque()
{
	return (_deque);
}

std::vector<int> PmergeMe::getVector()
{
	return (_vector);
}

int PmergeMe::getNbCount()
{
	return (_nb_count);
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

	std::vector<int> str;
	std::vector<int> arr;
	std::deque<int> deq;
	std::deque<int> deqArr;
	pmergeMe.setvector(argv);
	str = pmergeMe.getVector();
	std::cout << "--------------------Vector--------------------" << std::endl;
	std::cout << "Before : ";
	printVector(str);
	std::cout << std::endl;
	clock_t Vector_start = clock();

	// Exécution de l'algorithme de tri
	arr = pmergeMe.fordJohnsonAlgo(str);

	// Arrêter le chrono
	clock_t Vector_end = clock();

	std::cout << std::endl;
	std::cout << "After : ";
	printVector(arr);
	std::cout << std::endl;

	// Calculer le temps écoulé en microsecondes
	double duration = (Vector_end - Vector_start) / (double)CLOCKS_PER_SEC * 100;

	std::cout << std::endl;
	std::cout << "Time to process a range of : " << pmergeMe.getNbCount() << " elements with ";
	printVector(arr);
	std::cout << "is : " << duration << " us" << std::endl;

	
	pmergeMe.setDeque(argv);
	deq = pmergeMe.getDeque();
	std::cout << "--------------------Deque--------------------" << std::endl;
	std::cout << "Before : ";
	printVector(str);
	std::cout << std::endl;
	clock_t Deque_start = clock();
	deqArr = pmergeMe.fordJohnsonAlgo(deq);
	clock_t Deque_end = clock();
	std::cout << std::endl;
	std::cout << "After : ";
	printDeque(deqArr);
	std::cout << std::endl;
	double duration2 = (Deque_end - Deque_start) / (double)CLOCKS_PER_SEC * 100;
	std::cout << std::endl;
	std::cout << "Time to process a range of : " << pmergeMe.getNbCount() << " elements with ";
	printDeque(deqArr);
	std::cout << "is : " << duration2 << " us" << std::endl;
	
	return 0;
}
