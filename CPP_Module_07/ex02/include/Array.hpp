/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:46:46 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 18:20:29 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();

		Array &operator=(Array const &copy);
		T &operator[](unsigned int i);
		unsigned int size() const;

		class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

template< typename T >
Array<T>::Array() : _array(NULL), _size(0) {}

template< typename T >
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template< typename T >
Array<T>::Array(Array const &copy) : _array(new T[copy._size]), _size(copy._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template< typename T >
Array<T>::~Array()
{
	delete [] _array;
}

template< typename T >
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != &copy)
	{
		delete [] _array;
		_array = new T[copy._size];
		_size = copy._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
	}
	return *this;
}

template< typename T >
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfLimitsException();
	return _array[i];
}

template< typename T >
unsigned int Array<T>::size() const
{
	return _size;
}

template< typename T >
const char *Array<T>::OutOfLimitsException::what() const throw()
{
	return "Error: Out of limits";
}

#endif