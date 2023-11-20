/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/20 18:13:53 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	gura;
	ScavTrap	amelia("\033[0;33m\033[1mAmelia\033[0;0m");
	ScavTrap	caliope("\033[0;90m\033[1mCaliope\033[0;0m");
	ScavTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	caliope.attack(gura.get_name());

	std::cout << "caliope:" << std::endl << caliope << std::endl;

	caliope = gura;

	std::cout << "caliope:" << std::endl << caliope << std::endl;
	std::cout << "kiara:" << std::endl << kiara << std::endl;

	caliope.guardGate();

	std::cout  << "|---------------------------------|" << std::endl << std::endl;
	std::cout  << "|--------- GURA ATTACK! ---------|" << std::endl;

	gura.attack(amelia.get_name());

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage( 20 );

	std::cout << std::endl << amelia << std::endl;

	amelia.beRepaired( 4 );

	std::cout << std::endl << amelia << std::endl;

	while (gura.get_energy_points())
		gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.guardGate();

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage( 1000 );
	amelia.beRepaired( 4 );
	amelia.guardGate();

	std::cout << std::endl << amelia << std::endl;

	std::cout  << "|--------------------------------|" << std::endl << std::endl;

	return 0;
}
