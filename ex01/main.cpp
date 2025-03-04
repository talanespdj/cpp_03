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

int	main(void)
{
	ClapTrap	Talan("Talan");
	ClapTrap	Diafarou("Diafarou");
	ScavTrap	Khalid("Khalid");

	Talan.attack("Khalid");
	Khalid.takeDamage(Talan.getAD());
	Khalid.beRepaired(18);
	Khalid.guardGate();
	Khalid.attack(Diafarou.getName());
	Diafarou.takeDamage(Khalid.getAD());
	return 0;
}
