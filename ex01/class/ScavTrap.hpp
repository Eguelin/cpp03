/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:16:52 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/20 18:26:34 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &src );
		~ScavTrap( void );

		void	attack( const std::string &target );
		void	guardGate( void );
};

#endif
