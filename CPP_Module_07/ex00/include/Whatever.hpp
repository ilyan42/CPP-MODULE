/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:02:26 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/21 12:09:54 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T min(T a, T b)
{
	return (a < b ? a : b);
}

template< typename T >
T max(T a, T b)
{
	return (a > b ? a : b);
}

#endif
