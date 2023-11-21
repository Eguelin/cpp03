/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:21 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 14:25:48 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("\033[0;34m\033[1mGura\033[0;0m"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
	*this = src;

	std::cout << "The copy of ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " is destroy!" << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &src)
{
	_name = src._name;
	_hit_points = src._hit_points;
	_energy_points = src._energy_points;
	_attack_damage = src._attack_damage;

	return (*this);
}

std::string	ClapTrap::get_name( void ) const
{
	return (_name);
}

int	ClapTrap::get_hit_points( void ) const
{
	return (_hit_points);
}

int	ClapTrap::get_energy_points( void ) const
{
	return (_energy_points);
}

int	ClapTrap::get_attack_damage( void ) const
{
	return (_attack_damage);
}

int	ClapTrap::check_claptrap( void ) const
{
	if (!_hit_points)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;

		return (1);
	}
	else if (!_energy_points)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;

		return (1);
	}

	return (0);
}

void	ClapTrap::attack( const std::string &target )
{
	if (check_claptrap())
		return ;

	_energy_points--;

	std::cout << "ClapTrap " << _name << " attacks " << target << \
	", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (check_claptrap())
		return ;

	_hit_points -= amount;

	std::cout << "ClapTrap " << _name << \
	" take " << amount << " points of damage!" << std::endl;

	if (_hit_points < 0)
		_hit_points = 0;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (check_claptrap())
		return ;

	_hit_points += amount;
	_energy_points--;

	std::cout << "ClapTrap " << _name << \
	" be repaired " << amount << " hit points!" << std::endl;
}


std::ostream	&operator<<( std::ostream &o, const ClapTrap &src )
{
	o << "Name = " << src.get_name() << std::endl \
	<< "Hit_points = " << src.get_hit_points() << std::endl \
	<< "Energy_points = " << src.get_energy_points() << std::endl \
	<< "Attack_damag = " << src.get_attack_damage() << std::endl;

	return (o);
}