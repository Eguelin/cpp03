/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:24 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/16 17:29:54 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;


	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &claptrap );
		~ClapTrap( void );

		ClapTrap	&operator=( const ClapTrap &claptrap );

		std::string	get_name( void ) const;
		int			get_hit_points( void ) const;
		int			get_energy_points( void ) const;
		int			get_attack_damage( void ) const;

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

std::ostream	&operator<<( std::ostream &o, const ClapTrap &claptrap );

#endif
