/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:21:21 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 01:21:31 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Talan("Talan");
	ClapTrap	*Diafarou = new ClapTrap("Roméo");
	ScavTrap	Khalid("Khalid");

	Talan.attack("Khalid");
	std::cout << Khalid.getAD() << " montre moi ta montre qui me montre que ta montre montre l'heure" << std::endl;
	Khalid.takeDamage(Talan.getAD());
	Khalid.beRepaired(18);
	Khalid.guardGate();
	Khalid.attack(Diafarou->getName());
	Diafarou->takeDamage(Khalid.getAD());
	delete Diafarou;
	return 0;
}
