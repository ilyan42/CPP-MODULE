/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:44:45 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 18:12:57 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	int random_number = (rand() % 3) + 1;
	if (random_number == 1)
		return new A;
	if (random_number == 2)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Type inconnu" << std::endl;
	}
}

void identify(Base& p)
{
	try {
		A& aRef = dynamic_cast<A&>(p); // Essaie de convertir p en une référence de type A
		std::cout << "A" << std::endl;  // Si ça réussit, on est sûr que p est de type A
		(void)aRef; // Éviter l'avertissement sur aRef non utilisé
	} catch (std::bad_cast&) {
		// Si la conversion échoue, on passe à la prochaine vérification
	}

	try {
		B& bRef = dynamic_cast<B&>(p); // Essaie de convertir p en une référence de type B
		std::cout << "B" << std::endl;  // Si ça réussit, on est sûr que p est de type B
		(void)bRef; // Éviter l'avertissement sur bRef non utilisé
	} catch (std::bad_cast&) {
		// Si la conversion échoue, on passe à la prochaine vérification
	}

	try {
		C& cRef = dynamic_cast<C&>(p); // Essaie de convertir p en une référence de type C
		std::cout << "C" << std::endl;  // Si ça réussit, on est sûr que p est de type C
		(void)cRef; // Éviter l'avertissement sur cRef non utilisé
	} catch (std::bad_cast&) {
		// Si la conversion échoue, p n'est pas de type A, B ou C
		std::cout << "Type inconnu" << std::endl;
	}
}