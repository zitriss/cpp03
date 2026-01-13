/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:41:00 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 17:41:54 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	std::cout << "Constructeurs" << std::endl;
	FragTrap noname;
	FragTrap sun("sun");
	FragTrap sun2(sun);
	FragTrap sun3 = sun;

	std::cout << std::endl << "Valide" << std::endl;
	sun.attack("moon");
	sun.takeDamage(1);
	sun.beRepaired(1);
	sun.highFivesGuys();

	std::cout << std::endl << "Invalide" << std::endl;
	sun.takeDamage(100);
	sun.takeDamage(10);
	sun.beRepaired(10);
	noname.attack("moon");


	std::cout << std::endl << "Destructeurs" << std::endl;
	return 0;
}