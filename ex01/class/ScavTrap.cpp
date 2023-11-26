/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 15:06:02 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

ScavTrap::ScavTrap( void )
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	*this = src;

	std::cout << "The copy of ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " is destroy!" << std::endl;
}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	ScavTrap::attack( const std::string &target )
{
	if (check_claptrap())
		return ;

	this->_energy_points--;

	std::cout << "ScavTrap " << this->_name << " attacks " << target << \
	", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (check_claptrap())
		return ;

	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
