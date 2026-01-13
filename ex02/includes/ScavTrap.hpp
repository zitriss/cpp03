/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:37:04 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 17:40:22 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &old_scav);
	ScavTrap &operator=(const ScavTrap &old_scav);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate(void);
private:
	std::string	name;
	int			hit_points ;
	int			energy_points;
	int			attack_damage;
	bool		isGuarding;
};

#endif