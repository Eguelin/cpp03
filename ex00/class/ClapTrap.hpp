/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:24 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define DEFAULT_T "\033[0m"
# define BBLUE_T "\033[1;34m"

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &src );
		~ClapTrap( void );

		ClapTrap	&operator=( const ClapTrap &src );

		const std::string	&get_name( void ) const;
		unsigned int		get_hit_points( void ) const;
		unsigned int		get_energy_points( void ) const;
		unsigned int		get_attack_damage( void ) const;

		int		check_claptrap( void ) const;
		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

	private:

		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

std::ostream	&operator<<( std::ostream &o, const ClapTrap &src );

#endif
