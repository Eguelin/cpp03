/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define BBLACK_T "\033[1;30m"
#define BRED_T "\033[1;31m"
#define BYELLOW_T "\033[1;33m"

int	main( void )
{
	FragTrap	gura;
	FragTrap	amelia(BYELLOW_T "Amelia" DEFAULT_T);
	FragTrap	caliope(BBLACK_T "Caliope" DEFAULT_T);
	FragTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	caliope.attack(gura.get_name());

	std::cout << std::endl << BBLACK_T << "Caliope" << DEFAULT_T << std::endl << caliope << std::endl;

	caliope = gura;

	std::cout << BBLACK_T << "Caliope" << DEFAULT_T << std::endl << caliope << std::endl;
	std::cout << BRED_T << "kiara" << DEFAULT_T << std::endl << kiara;

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
