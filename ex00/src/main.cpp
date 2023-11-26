/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 14:50:53 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define BBLACK_T "\033[1;30m"
#define BRED_T "\033[1;31m"
#define BYELLOW_T "\033[1;33m"

int	main( void )
{
	ClapTrap	gura;
	ClapTrap	amelia(BYELLOW_T "Amelia" RESET_T);
	ClapTrap	caliope(BBLACK_T "Caliope" RESET_T);
	ClapTrap	kiara(amelia);

	std::cout << std::endl << "|------------- print -------------|" << std::endl;

	caliope.attack(gura.get_name());

	std::cout << std::endl << BBLACK_T << "Caliope" << RESET_T << std::endl << caliope << std::endl;

	caliope = gura;

	std::cout << BBLACK_T << "Caliope" << RESET_T << std::endl << caliope << std::endl;
	std::cout << BRED_T << "kiara" << RESET_T << std::endl << kiara;
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
