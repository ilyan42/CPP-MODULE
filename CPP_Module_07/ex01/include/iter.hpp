/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:12:38 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 14:09:19 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void iter(T *array, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template< typename T >
void iter(T *array, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif