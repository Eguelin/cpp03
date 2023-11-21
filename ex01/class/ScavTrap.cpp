/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 14:48:29 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	*this = src;

	std::cout << "The copy of ScavTrap " << _name << " is created!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " is destroy!" << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	if (check_claptrap())
		return ;

	_energy_points--;

	std::cout << "ScavTrap " << _name << " attacks " << target << \
	", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (check_claptrap())
		return ;

	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
