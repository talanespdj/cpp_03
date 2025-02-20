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

int	main()
{
	// DiamondTrap	talan;

	// talan.whoAmI();
	// return (0);
	FragTrap	a;
	DiamondTrap	b("Morgan");
	ClapTrap	c("Hugues");
	ScavTrap	d("Ben");

	// std::cout << c << std::endl;
	// std::cout << d << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	b.whoAmI();
	std::cout << "===" << std::endl;
	b.takeDamage(3);
	// std::cout << b << std::endl;
	b.takeDamage(20);
	// std::cout << b << std::endl;
	b.beRepaired(3);
	// std::cout << b << std::endl;
	b.attack("Eric");
	b.attack("Eric");
	// std::cout << b << std::endl;
	b.attack("Eric");
	// std::cout << b << std::endl;
	b.beRepaired(100);
	// std::cout << b << std::endl;
	b.attack("Eric");
}
