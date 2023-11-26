/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:52 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:38:45 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &src );
		~ScavTrap( void );

		unsigned int	get_start_hit_points( void ) const;
		unsigned int	get_start_energy_points( void ) const;
		unsigned int	get_start_attack_damage( void ) const;

		void	attack( const std::string &target );
		void	guardGate( void );

	private:

		const static unsigned int	_start_hit_points = 100;
		const static unsigned int	_start_energy_points = 50;
		const static unsigned int	_start_attack_damage = 20;
};

#endif
