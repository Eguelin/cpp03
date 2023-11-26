/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:40:24 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

ScavTrap::ScavTrap( void )
{
	this->_hit_points = this->_start_hit_points;
	this->_energy_points = this->_start_energy_points;
	this->_attack_damage = this->_start_attack_damage;

	std::cout << "ScavTrap " << this->_name << " is created!" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = this->_start_hit_points;
	this->_energy_points = this->_start_energy_points;
	this->_attack_damage = this->_start_attack_damage;

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
/*                                   Getters                                  */
/* ************************************************************************** */

unsigned int	ScavTrap::get_start_hit_points( void ) const {return (this->_start_hit_points);}

unsigned int	ScavTrap::get_start_energy_points( void ) const {return (this->_start_energy_points);}

unsigned int	ScavTrap::get_start_attack_damage( void ) const {return (this->_start_attack_damage);}

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
