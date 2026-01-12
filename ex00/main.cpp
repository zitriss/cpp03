/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:41:00 by tlize             #+#    #+#             */
/*   Updated: 2026/01/12 09:34:30 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	std::cout << "Constructeurs" << std::endl;
	ClapTrap noname;
	ClapTrap sun("sun");
	ClapTrap sun2(sun);
	ClapTrap sun3 = sun;

	std::cout << std::endl << "Valide" << std::endl;
	sun.attack("moon");
	sun.takeDamage(1);
	sun.beRepaired(1);

	std::cout << std::endl << "Invalide" << std::endl;
	sun.takeDamage(10);
	sun.takeDamage(10);
	sun.beRepaired(10);
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");
	noname.attack("moon");

	std::cout << std::endl << "Destructeurs" << std::endl;
	return 0;
}