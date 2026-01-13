/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:07:09 by tlize             #+#    #+#             */
/*   Updated: 2026/01/13 17:40:52 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &old_scav);
	FragTrap &operator=(const FragTrap &old_scav);
	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys(void);
private:
	std::string	name;
	int			hit_points ;
	int			energy_points;
	int			attack_damage;
};

#endif