/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:41:04 by tlize             #+#    #+#             */
/*   Updated: 2026/01/07 11:29:10 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name)
{
	this->name = name;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_clap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = old_clap;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &old_clap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this == &old_clap)
		return *this;
	this->name = old_clap.name;
	this->hit_points = old_clap.hit_points;
	this->energy_points = old_clap.energy_points;
	this->attack_damage = old_clap.attack_damage;
	return *this;
}