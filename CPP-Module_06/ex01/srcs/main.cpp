/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:44:18 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 17:15:38 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serialization.hpp"

int main(void)
{
	std::string myString = "ouai ouai ouai";
	Data test = {36, &myString};

	uintptr_t ptr = Serializer::serialize(&test);

	std::cout << "Avant désérialisation:" << std::endl;
	std::cout << "Nombre: " << test.nb << std::endl;
	std::cout << "Chaîne: " << *(test.str) << std::endl;

	Data* deserializedData = Serializer::deserialize(ptr);

	std::cout << "\nAprès désérialisation:" << std::endl;
	std::cout << "Nombre: " << deserializedData->nb << std::endl;
	std::cout << "Chaîne: " << *(deserializedData->str) << std::endl;
}
