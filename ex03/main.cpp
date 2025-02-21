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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap	a;
	DiamondTrap	b("Theo");
	ClapTrap	c("Khalid");
	ScavTrap	d("Ines");

	std::cout << c.getName() << std::endl;
	std::cout << d.getName() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << b.getName() << std::endl;
	b.whoAmI();
	std::cout << "===" << std::endl;
	b.takeDamage(3);
	std::cout << b.getName() << std::endl;
	b.takeDamage(20);
	std::cout << b.getName() << std::endl;
	b.beRepaired(3);
	std::cout << b.getName() << std::endl;
	b.attack("Diafarou");
	b.attack("Diafarou");
	std::cout << b.getName() << std::endl;
	b.attack("Diafarou");
	std::cout << b.getName() << std::endl;
	b.beRepaired(100);
	std::cout << b.getName() << std::endl;
	b.attack("Diafarou");
}
