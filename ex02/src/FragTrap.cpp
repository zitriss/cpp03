/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:35:22 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 17:48:35 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "DefaultFrag";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old_scav)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = old_scav;
}

FragTrap &FragTrap::operator=(const FragTrap &old_scav)
{
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	this->name = old_scav.name;
	this->hit_points = old_scav.hit_points;
	this->energy_points = old_scav.energy_points;
	this->attack_damage = old_scav.attack_damage;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		this->energy_points --;
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " can't do anything !" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " is requesting a High Five !" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->name << " can't do anything !" << std::endl;
	}
}