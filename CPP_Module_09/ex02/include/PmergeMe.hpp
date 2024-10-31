/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:24:55 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/31 18:27:22 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class PmergeMe
{
	private :
		std::vector<int> _vector;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &copy);
		bool PmergeMe_parseString(std::string str);
		int PmergeMe_algo(std::string str);
		std::vector<int> fordJohnsonAlgo(std::vector<int> arr);
		void setvector(char **av);
		// void printVector(std::vector<int> arr);
		std::vector<int> getVector();
};

void printVector(std::vector<int> arr);

#endif