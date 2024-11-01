/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PemergeMe.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:25:40 by ilbendib          #+#    #+#             */
/*   Updated: 2024/11/01 14:46:24 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <sstream>	

PmergeMe::PmergeMe() {
	_nb_count = 0;
}

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
	// std::cout << std::endl;
}

void printDeque(std::deque<int> arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	// std::cout << std::endl;
}

std::vector<int> MergeArray(std::vector<int> leftArr, std::vector<int> rightArray)
{
	std::vector<int> merge;
	size_t i = 0, j = 0;
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
	return merge;
}

std::vector<int> PmergeMe::fordJohnsonAlgo(std::vector<int> arr)
{
	if (arr.empty())
		return arr;
	if (arr.size() == 1)
	{
		return arr;
	}
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return arr;
	}
	std::vector<int> leftArr(arr.begin(), arr.begin() + arr.size() / 2);
	std::vector<int> rightArr(arr.begin() + arr.size() / 2, arr.end());
	// printVector(leftArr);
	// printVector(rightArr);
	leftArr = fordJohnsonAlgo(leftArr);
	rightArr = fordJohnsonAlgo(rightArr);
	std::vector<int> mergedArr = MergeArray(leftArr, rightArr);
	return mergedArr;
}




std::deque<int> MergeArray(std::deque<int> leftArr, std::deque<int> rightArray)
{
	std::deque<int> merge;
	size_t i = 0, j = 0;
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
	return merge;
}

std::deque<int> PmergeMe::fordJohnsonAlgo(std::deque<int> arr)
{
	if (arr.empty())
		return arr;
	if (arr.size() == 1)
	{
		return arr;
	}
	if (arr.size() == 2)
	{
		if (arr[0] > arr[1])
			std::swap(arr[0], arr[1]);
		return arr;
	}
	std::deque<int> leftArr(arr.begin(), arr.begin() + arr.size() / 2);
	std::deque<int> rightArr(arr.begin() + arr.size() / 2, arr.end());
	// printdeque(leftArr);
	// printdeque(rightArr);
	leftArr = fordJohnsonAlgo(leftArr);
	rightArr = fordJohnsonAlgo(rightArr);
	std::deque<int> mergedArr = MergeArray(leftArr, rightArr);
	return mergedArr;
}