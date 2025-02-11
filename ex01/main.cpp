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
	ClapTrap	A("Talan");
	ClapTrap	B("Khalid");
	
	A.attack("Khalid");
	A.takeDamage(5);
	A.beRepaired(4);
	return (0);
}
