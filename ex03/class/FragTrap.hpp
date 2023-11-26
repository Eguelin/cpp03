/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:52 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:38:57 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &src );
		~FragTrap( void );

		unsigned int	get_start_hit_points( void ) const;
		unsigned int	get_start_energy_points( void ) const;
		unsigned int	get_start_attack_damage( void ) const;

		void	highFivesGuys( void );

	private:

		const static unsigned int	_start_hit_points = 100;
		const static unsigned int	_start_energy_points = 100;
		const static unsigned int	_start_attack_damage = 30;
};

#endif
