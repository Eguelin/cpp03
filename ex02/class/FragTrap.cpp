/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 17:29:02 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src )
{
	*this = src;

	std::cout << "The copy of FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << _name << " is destroy!" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (check_claptrap())
		return ;

	std::cout << "FragTrap " << _name << " gives you a high five!" << std::endl;
}
