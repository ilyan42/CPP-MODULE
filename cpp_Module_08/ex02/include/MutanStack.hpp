/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:47:17 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/25 12:25:47 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		
		MutantStack() {}
		~MutantStack() {}
		
		MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}

		MutantStack& operator=(const MutantStack& copy) {
			if (this != &copy) {
				std::stack<T>::operator=(copy);
			}
			return *this;
		}

		iterator begin()
		{
			return std::stack<T>::c.begin();
		}
		
		iterator end()
		{
			return std::stack<T>::c.end();
		}
		
		const_iterator begin() const
		{
			return std::stack<T>::c.begin();
		}
		
		const_iterator end() const
		{
			return std::stack<T>::c.end();
		}
};

#endif