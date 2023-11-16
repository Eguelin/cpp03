/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:00:26 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/16 18:41:41 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	gura;
	ClapTrap	caliope("\033[0;90mCaliope\033[0;0m");
	ClapTrap	amelia("\033[0;33mAmelia\033[0;0m");
	ClapTrap	kiara(caliope);

	std::cout << std::endl << "|--------- print caliope ---------|" << std::endl;
	std::cout << caliope << std::endl;

	caliope = gura;

	std::cout << caliope;
	std::cout  << "|---------------------------------|" << std::endl << std::endl;
	std::cout  << "|--------- GURA ATTACK! ---------|" << std::endl;

	gura.attack(amelia.get_name());

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage( 1 );

	std::cout << std::endl << amelia << std::endl;

	amelia.beRepaired( 4 );

	std::cout << std::endl << amelia << std::endl;

	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());
	gura.attack(amelia.get_name());

	std::cout << std::endl << gura << std::endl;

	amelia.takeDamage( 100 );
	amelia.beRepaired( 4 );

	std::cout << std::endl << amelia << std::endl;

	std::cout  << "|--------------------------------|" << std::endl << std::endl;

	return 0;
}
