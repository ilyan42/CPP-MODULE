/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:06:43 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/23 17:49:24 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(0));
	for (int i = 0; i < 5; ++i) {
		Base* obj = generate();
		std::cout << "identify (pointeur): ";
		identify(obj);
		delete obj;
	}
	for (int i = 0; i < 5; ++i) {
		Base* obj = generate();
		std::cout << "identify (référence): ";
		identify(*obj);
		delete obj;
	}

	return 0;
}