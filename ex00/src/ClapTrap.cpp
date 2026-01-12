/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:41:04 by tlize             #+#    #+#             */
/*   Updated: 2026/01/12 11:06:19 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
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

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		this->energy_points --;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " can't do anything !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		this->hit_points = this->hit_points - amount;
		std::cout << "ClapTrap " << this->name << " took " << amount << " damage" << std::endl;		
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is already dead !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		this->hit_points = this->hit_points + amount;
		this->energy_points --;
		std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " hit points" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " can't do anything !" << std::endl;
	}
}