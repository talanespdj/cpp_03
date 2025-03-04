/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:26:12 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 01:23:47 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	std::cout << "An anonymous Scavtrap was made, welcome" << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "A Scavtrap was made, welcome " << getName() << " as you should." << std::endl;
};

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap destroyed, bye bye " << getName() << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& f) {
	std::cout << getName() << " Copy constructor called" << std::endl;
	*this = f;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& f) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &f) {
		this->name = f.name;
		this->HP = f.HP;
		this->EP = f.EP;
		this->AD = f.AD;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (!getHP() || !getEP()) {
		std::cout << name << " cannot attack anyone, no HP/EP left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << getAD() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "Scavtrap " << name << " is now in Gate keeper mode" << std::endl;
}
