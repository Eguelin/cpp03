/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 17:26:22 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	FragTrap	gura;
	FragTrap	amelia("\033[0;33m\033[1mAmelia\033[0;0m");
	FragTrap	caliope("\033[0;90m\033[1mCaliope\033[0;0m");
	FragTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	caliope.attack(gura.get_name());

	std::cout << std::endl << "\033[0;90m\033[1mCaliope\033[0;0m:" << std::endl << caliope << std::endl;

	caliope = gura;

	std::cout << "\033[0;90m\033[1mCaliope\033[0;0m:" << std::endl << caliope << std::endl;
	std::cout << "\033[0;31m\033[1mkiara\033[0;0m:" << std::endl << kiara << std::endl;

	caliope.highFivesGuys();

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
	gura.highFivesGuys();

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage(3000);
	amelia.beRepaired(4);
	amelia.highFivesGuys();

	std::cout << std::endl << amelia;

	std::cout  << "|--------------------------------|" << std::endl << std::endl;

	return (0);
}
