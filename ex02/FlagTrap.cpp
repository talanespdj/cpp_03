/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 23:43:13 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 23:43:15 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
};

FlagTrap::FlagTrap() : ClapTrap("") {
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}


FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap Deconstructor called" << std::endl;
};

FlagTrap::FlagTrap(const FlagTrap& f) {
	std::cout << "FlagTrap Copy constructor called" << std::endl;
	*this = f;
}

FlagTrap&	FlagTrap::operator=(const FlagTrap& f) {
	std::cout << "FlagTrap Copy assignment operator called" << std::endl;
	if (this != &f) {
		this->name = f.name;
		this->HP = f.HP;
		this->EP = f.EP;
		this->AD = f.AD;
	}
	return (*this);
}

void	FlagTrap::highFivesGuys(void) {
	std::cout << "Flagtrap " << getName() << " is asking for an high five !" << std::endl;
}
