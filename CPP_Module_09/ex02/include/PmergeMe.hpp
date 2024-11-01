/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:24:55 by ilbendib          #+#    #+#             */
/*   Updated: 2024/11/01 14:47:29 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>


class PmergeMe
{
	private :
		std::vector<int> _vector;
		std::deque<int> _deque;
		int _nb_count;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &copy);

		//methods  vector//
		bool PmergeMe_parseString(std::string str);
		std::vector<int> fordJohnsonAlgo(std::vector<int> arr);

		//methods  deque//
		// std::deque<int> MergeArray(std::deque<int> leftArr, std::deque<int> rightArray);
		std::deque<int> fordJohnsonAlgo(std::deque<int> arr);
		
		//setters//
		void setvector(char **av);
		void setDeque(char **av);

		//getters//
		std::vector<int> getVector();
		std::deque<int> getDeque();
		int getNbCount();
};

void printDeque(std::deque<int> arr);
void printVector(std::vector<int> arr);

#endif