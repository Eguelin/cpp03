/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:24 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/20 18:45:22 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &src );
		~ClapTrap( void );

		ClapTrap	&operator=( const ClapTrap &src );

		std::string	get_name( void ) const;
		int			get_hit_points( void ) const;
		int			get_energy_points( void ) const;
		int			get_attack_damage( void ) const;
		int			check_claptrap( const ClapTrap &src );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

std::ostream	&operator<<( std::ostream &o, const ClapTrap &src );

#endif
