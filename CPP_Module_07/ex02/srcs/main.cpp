/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:39:03 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 18:26:37 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int main()
{
	try
	{
		Array<int> emptyArray;
		std::cout << "Taille du tableau vide: " << emptyArray.size() << std::endl;
		Array<int> intArray(5);
		std::cout << "Taille du tableau intArray: " << intArray.size() << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			intArray[i] = i * 10;
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}
		Array<int> copyArray(intArray);
		std::cout << "Taille du tableau copyArray (copie de intArray): " << copyArray.size() << std::endl;
		for (unsigned int i = 0; i < copyArray.size(); i++)
		{
			std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
		}
		Array<int> assignedArray;
		assignedArray = intArray;
		std::cout << "Taille du tableau assignedArray après affectation: " << assignedArray.size() << std::endl;
		for (unsigned int i = 0; i < assignedArray.size(); i++)
		{
			std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
		}
		std::cout << "Tentative d'accès hors limites : " << std::endl;
		std::cout << intArray[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}