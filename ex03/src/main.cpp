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

#include "DiamondTrap.hpp"

#define BBLACK_T "\033[0;30m"
#define BRED_T "\033[0;31m"
#define BYELLOW_T "\033[0;33m"

int	main( void )
{
	DiamondTrap	gura;
	DiamondTrap	amelia(BYELLOW_T "Amelia" DEFAULT_T);
	DiamondTrap	caliope(BBLACK_T "Caliope" DEFAULT_T);
	DiamondTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	gura.whoAmI();
	amelia.whoAmI();
	caliope.whoAmI();
	kiara.whoAmI();

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
	gura.whoAmI();

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage(3000);
	amelia.beRepaired(4);
	amelia.highFivesGuys();
	amelia.whoAmI();

	std::cout << std::endl << amelia;

	std::cout  << "|--------------------------------|" << std::endl << std::endl;

	return (0);
}
