/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:38:29 by tlize             #+#    #+#             */
/*   Updated: 2026/01/12 11:06:06 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "DefaultScav";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->isGuarding = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->isGuarding = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old_scav)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = old_scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &old_scav)
{
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	this->name = old_scav.name;
	this->hit_points = old_scav.hit_points;
	this->energy_points = old_scav.energy_points;
	this->attack_damage = old_scav.attack_damage;
	this->isGuarding = old_scav.isGuarding;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		this->energy_points --;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " can't do anything !" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		if(this->isGuarding == false)
		{
			std::cout << "ScavTrap " << this->name << " is now guarding the Gate" << std::endl; 	
			this->isGuarding = true;	
		}
		else
		{
			std::cout << "ScavTrap " << this->name << " is guarding the Gate even more" << std::endl; 	
		}
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " can't do anything !" << std::endl;
	}
}