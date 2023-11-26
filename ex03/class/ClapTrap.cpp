/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:21 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 15:07:57 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

ClapTrap::ClapTrap( void ): _name(BBLUE_T "Gura" RESET_T), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
	*this = src;

	std::cout << "The copy of ClapTrap " << this->_name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->_name << " is destroy!" << std::endl;
}

/* ************************************************************************** */
/*                            Operator overloading                            */
/* ************************************************************************** */

ClapTrap	&ClapTrap::operator=( const ClapTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;

	return (*this);
}

/* ************************************************************************** */
/*                                   Getters                                  */
/* ************************************************************************** */

const std::string	&ClapTrap::get_name( void ) const {return (this->_name);}

unsigned int	ClapTrap::get_hit_points( void ) const {return (this->_hit_points);}

unsigned int	ClapTrap::get_energy_points( void ) const {return (this->_energy_points);}

unsigned int	ClapTrap::get_attack_damage( void ) const {return (this->_attack_damage);}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

int	ClapTrap::check_claptrap( void ) const
{
	if (!this->_hit_points)
	{
		std::cout << this->_name << " is dead!" << std::endl;

		return (1);
	}
	else if (!this->_energy_points)
	{
		std::cout << this->_name << " is out of energy!" << std::endl;

		return (1);
	}

	return (0);
}

void	ClapTrap::attack( const std::string &target )
{
	if (check_claptrap())
		return ;

	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (check_claptrap())
		return ;

	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;

	std::cout << "ClapTrap " << this->_name << " take ";
	std::cout << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (check_claptrap())
		return ;

	this->_hit_points += amount;
	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name << " be repaired ";
	std::cout << amount << " hit points!" << std::endl;
}

/* ************************************************************************** */
/*                               Printf overload                              */
/* ************************************************************************** */

std::ostream	&operator<<( std::ostream &o, const ClapTrap &src )
{
	o << "Name = " << src.get_name() << std::endl;
	o << "Hit_points = " << src.get_hit_points() << std::endl;
	o << "Energy_points = " << src.get_energy_points() << std::endl;
	o << "Attack_damag = " << src.get_attack_damage() << std::endl;

	return (o);
}
