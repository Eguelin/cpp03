/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:21 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/16 18:46:27 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static int	ft_claptrap_can( const ClapTrap &claptrap );

ClapTrap::ClapTrap( void ): _name("\033[0;34m\033[1mGura\033[0;0m"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << ClapTrap::_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	ClapTrap::_name = name;

	std::cout << "ClapTrap " << ClapTrap::_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap )
{
	ClapTrap::_name = claptrap._name;
	ClapTrap::_hit_points = claptrap._hit_points;
	ClapTrap::_energy_points = claptrap._energy_points;
	ClapTrap::_attack_damage = claptrap._attack_damage;

	std::cout << "The copy of ClapTrap " << ClapTrap::_name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << ClapTrap::_name << " is destroy!" << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &claptrap)
{
	ClapTrap::_name = claptrap._name;
	ClapTrap::_hit_points = claptrap._hit_points;
	ClapTrap::_energy_points = claptrap._energy_points;
	ClapTrap::_attack_damage = claptrap._attack_damage;

	return (*this);
}

std::string	ClapTrap::get_name( void ) const
{
	return (ClapTrap::_name);
}

int	ClapTrap::get_hit_points( void ) const
{
	return (ClapTrap::_hit_points);
}

int	ClapTrap::get_energy_points( void ) const
{
	return (ClapTrap::_energy_points);
}

int	ClapTrap::get_attack_damage( void ) const
{
	return (ClapTrap::_attack_damage);
}

void	ClapTrap::attack( const std::string &target )
{
	if (ft_claptrap_can(*this))
		return ;

	ClapTrap::_energy_points--;

	std::cout << "ClapTrap " << ClapTrap::_name << " attacks " << target << \
	", causing " << ClapTrap::_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (ft_claptrap_can(*this))
		return ;

	ClapTrap::_hit_points -= amount;

	std::cout << "ClapTrap " << ClapTrap::_name << \
	" take " << amount << " points of damage!" << std::endl;

	if (ClapTrap::_hit_points < 0)
		ClapTrap::_hit_points = 0;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (ft_claptrap_can(*this))
		return ;

	ClapTrap::_hit_points += amount;
	ClapTrap::_energy_points--;

	std::cout << "ClapTrap " << ClapTrap::_name << \
	" be repaired " << amount << " hit points!" << std::endl;
}

std::ostream	&operator<<( std::ostream &o, const ClapTrap &claptrap )
{
	o << "Name = " << claptrap.get_name() << std::endl \
	<< "Hit_points = " << claptrap.get_hit_points() << std::endl \
	<< "Energy_points = " << claptrap.get_energy_points() << std::endl \
	<< "Attack_damag = " << claptrap.get_attack_damage() << std::endl;

	return (o);
}

static int	ft_claptrap_can( const ClapTrap &claptrap )
{
	if (!claptrap.get_hit_points())
	{
		std::cout << "ClapTrap " << claptrap.get_name() << " is dead!" << std::endl;

		return (1);
	}
	else if (!claptrap.get_energy_points())
	{
		std::cout << "ClapTrap " << claptrap.get_name() << " is out of energy!" << std::endl;

		return (1);
	}

	return (0);
}
