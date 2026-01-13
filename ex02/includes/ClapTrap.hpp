/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:41:02 by tlize             #+#    #+#             */
/*   Updated: 2026/01/10 16:51:54 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &old_clap);
	ClapTrap &operator=(const ClapTrap &old_clap);
	~ClapTrap();
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
private:
	std::string	name;
	int			hit_points ;
	int			energy_points;
	int			attack_damage;
};

#endif