/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PemergeMe.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:25:40 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/31 19:40:55 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <sstream>	

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return (*this);
}

bool PmergeMe::PmergeMe_parseString(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != ' ')
			return (false);
	}
	return (true);
}


void printVector(std::vector<int> arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

std::vector<int> MergeArray(std::vector<int> leftArr, std::vector<int> rightArray)
{
	std::vector<int> merge;
	size_t i = 0, j = 0;
	std::cout << "-------------------" << std::endl;
	printVector(leftArr);
	printVector(rightArray);
	while (i < leftArr.size() && j < rightArray.size())
	{
		if (leftArr[i] < rightArray[j])
			merge.push_back(leftArr[i++]);
		else
			merge.push_back(rightArray[j++]);
	}
	while (i < leftArr.size())
		merge.push_back(leftArr[i++]);
	while (j < rightArray.size())
		merge.push_back(rightArray[j++]);
	std::cout << " result : ";
	printVector(merge);
	std::cout << std::endl;
	return merge;
}

std::vector<int> PmergeMe::fordJohnsonAlgo(std::vector<int> arr)
{
	if (arr.empty())
	{
		std::cout << "The array is empty" << std::endl;
		return arr;
	}
	if (arr.size() == 1)
	{
		return arr;
	}
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
		{
			std::cout << "swap" << std::endl;
			std::swap(arr[0], arr[1]);
		}
		return arr;
	}

	std::vector<int> leftArr(arr.begin(), arr.begin() + arr.size() / 2);
	std::vector<int> rightArr(arr.begin() + arr.size() / 2, arr.end());
	printVector(leftArr);
	printVector(rightArr);
	leftArr = fordJohnsonAlgo(leftArr);
	rightArr = fordJohnsonAlgo(rightArr);
	std::vector<int> mergedArr = MergeArray(leftArr, rightArr);
    return mergedArr;
}



