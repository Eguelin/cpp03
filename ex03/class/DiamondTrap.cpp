/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:17:20 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/27 16:00:33 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

DiamondTrap::DiamondTrap( void ): ClapTrap( BBLUE_T "Gura" RESET_T "_clap_name"), _name(BBLUE_T "Gura" RESET_T)
{
	this->_hit_points = this->FragTrap::get_start_hit_points();
	this->_energy_points = this->ScavTrap::get_start_energy_points();
	this->_attack_damage = this->FragTrap::get_start_attack_damage();

	std::cout << "DiamondTrap " << this->_name << " is created!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap( name + "_clap_name"), _name(name)
{
	this->_hit_points = this->FragTrap::get_start_hit_points();
	this->_energy_points = this->ScavTrap::get_start_energy_points();
	this->_attack_damage = this->FragTrap::get_start_attack_damage();

	std::cout << "DiamondTrap " << this->_name << " is created!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src )
{
	*this = src;

	std::cout << "The copy of DiamondTrap " << this->_name << " is created!" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->_name << " is destroy!" << std::endl;
}

/* ************************************************************************** */
/*                              Operator overload                             */
/* ************************************************************************** */

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &src )
{
	this->ClapTrap::_name = src.ClapTrap::get_name();
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;

	return (*this);
}

/* ************************************************************************** */
/*                                   Getters                                  */
/* ************************************************************************** */

std::string	DiamondTrap::get_name( void ) const {return (_name);}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	DiamondTrap::whoAmI( void )
{
	if (check_claptrap())
		return ;

	std::cout << "ClapTrap Name = " << this->ClapTrap::get_name() << std::endl;
	std::cout << "Name = " << this->get_name() << std::endl;
}

/* ************************************************************************** */
/*                               Print overload                               */
/* ************************************************************************** */

std::ostream	&operator<<( std::ostream &o, const DiamondTrap &src )
{
	o << "ClapTrap Name = " << src.ClapTrap::get_name() << std::endl;
	o << "Name = " << src.get_name() << std::endl;
	o << "Hit_points = " << src.get_hit_points() << std::endl;
	o << "Energy_points = " << src.get_energy_points() << std::endl;
	o << "Attack_damag = " << src.get_attack_damage() << std::endl;

	return (o);
}
