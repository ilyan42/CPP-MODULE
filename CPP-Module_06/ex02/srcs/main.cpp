/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:06:43 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 18:11:44 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(0));  // Initialiser le générateur de nombres aléatoires

	// Test avec un pointeur
	for (int i = 0; i < 5; ++i) {
		Base* obj = generate();  // Générer une instance aléatoire de A, B ou C
		std::cout << "identify (pointeur): ";
		identify(obj);           // Identifier le type de l'objet avec le pointeur
		delete obj;              // Nettoyer la mémoire
	}

	// Test avec une référence
	for (int i = 0; i < 5; ++i) {
		Base* obj = generate();  // Générer une instance aléatoire de A, B ou C
		std::cout << "identify (référence): ";
		identify(*obj);          // Identifier le type de l'objet avec la référence
		delete obj;              // Nettoyer la mémoire
	}

	return 0;
}