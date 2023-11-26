/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:35:42 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "FragTrap " << this->_name << " is created!" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

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
/*                           Public member functions                          */
/* ************************************************************************** */

void	FragTrap::highFivesGuys( void )
{
	if (check_claptrap())
		return ;

	std::cout << "FragTrap " << this->_name << " gives you a high five!" << std::endl;
}
