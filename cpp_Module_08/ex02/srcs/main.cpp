/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:12:03 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:07 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutanStack.hpp"

int main()
{
	std::cout << "---------test std::list---------" << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "top element : "<< mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << "it : "<< *it << std::endl;
		++it;
	}

	std::cout << "---------test MutantStack---------" << std::endl;
	MutantStack<int> mstack2;
	mstack2.push(5);
	mstack2.push(17);
	std::cout << "top element : "<< mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << "size : " << mstack2.size() << std::endl;
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	while (it2 != ite2)
	{
		std::cout << "it2 = " << *it2 << std::endl;
		++it2;
	}
	return 0;
}