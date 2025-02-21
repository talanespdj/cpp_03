/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 23:43:13 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 23:43:15 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "A FragTrap was made, wassup " << getName() << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "A FragTrap was made from Claptrap " << getName() << std::endl;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed, bye bye " << getName() << std::endl;
};

FragTrap::FragTrap(const FragTrap& f) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = f;
}

FragTrap&	FragTrap::operator=(const FragTrap& f) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &f) {
		this->name = f.name;
		this->HP = f.HP;
		this->EP = f.EP;
		this->AD = f.AD;
	}
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << getName() << ": Gimme a high five - CLAP - That's what im talking about" << std::endl;
}
