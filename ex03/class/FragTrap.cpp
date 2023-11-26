/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:39:31 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_hit_points = this->_start_hit_points;
	this->_energy_points = this->_start_energy_points;
	this->_attack_damage = this->_start_attack_damage;

	std::cout << "FragTrap " << this->_name << " is created!" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = this->_start_hit_points;
	this->_energy_points = this->_start_energy_points;
	this->_attack_damage = this->_start_attack_damage;

	std::cout << "FragTrap " << this->_name << " is created!" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src )
{
	*this = src;

	std::cout << "The copy of FragTrap " << this->_name << " is created!" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " is destroy!" << std::endl;
}

/* ************************************************************************** */
/*                                   Getters                                  */
/* ************************************************************************** */

unsigned int	FragTrap::get_start_hit_points( void ) const {return (this->_start_hit_points);}

unsigned int	FragTrap::get_start_energy_points( void ) const {return (this->_start_energy_points);}

unsigned int	FragTrap::get_start_attack_damage( void ) const {return (this->_start_attack_damage);}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	FragTrap::highFivesGuys( void )
{
	if (check_claptrap())
		return ;

	std::cout << "FragTrap " << this->_name << " gives you a high five!" << std::endl;
}
