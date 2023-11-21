/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 14:30:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	gura;
	ClapTrap	amelia("\033[0;33m\033[1mAmelia\033[0;0m");
	ClapTrap	caliope("\033[0;90m\033[1mCaliope\033[0;0m");
	ClapTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	caliope.attack(gura.get_name());

	std::cout << std::endl << "\033[0;90m\033[1mCaliope\033[0;0m:" << std::endl << caliope << std::endl;

	caliope = gura;

	std::cout << "\033[0;90m\033[1mCaliope\033[0;0m:" << std::endl << caliope << std::endl;
	std::cout << "\033[0;31m\033[1mkiara\033[0;0m:" << std::endl << kiara;
	std::cout  << "|---------------------------------|" << std::endl << std::endl;
	std::cout  << "|--------- GURA ATTACK! ---------|" << std::endl;

	gura.attack(amelia.get_name());

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage(1);

	std::cout << std::endl << amelia << std::endl;

	amelia.beRepaired(4);

	std::cout << std::endl << amelia << std::endl;

	while (gura.get_energy_points())
		gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage(100);
	amelia.beRepaired(4);

	std::cout << std::endl << amelia;

	std::cout  << "|--------------------------------|" << std::endl << std::endl;

	return (0);
}
