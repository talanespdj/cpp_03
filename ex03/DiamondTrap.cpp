/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 01:47:46 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/19 01:51:06 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(),  FragTrap(), ScavTrap() {
	std::cout << "A DiamondTrap was made, Mbote " << getName() << std::endl;
	this->name = ("Namonymous");
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
};

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "clap_name"), ScavTrap(name + "clap_name") {
	std::cout << "A DiamondTrap was made, Mbote " << getName() << std::endl;
	this->name = name;
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
	std::cout << this->HP << ":" << this->EP << ":" << this->AD << std::endl;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destroyed, bye bye " << getName() << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& f) {
	std::cout << getName() << " Diamond Copy constructor called" << std::endl;
	*this = f;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& f) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &f) {
		this->name = f.name;
		this->HP = f.HP;
		this->EP = f.EP;
		this->AD = f.AD;
	}
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is " << this->name << ". However my ClapTrap name is " << ClapTrap::name << "." << std::endl;
}
