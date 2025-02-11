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

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
};

ScavTrap::~ScavTrap() : ClapTrap() {
	std::cout << "Deconstructor called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& f) {
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAD() << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << getName() << " lost " << amount << " Hit points." << std::endl;
	this->HP -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (!getHP() || !getEP()) {
		std::cout << name << " cannot repair itself , no HP/EP left." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " repairs itself and gain one HP." << std::endl;
	this->HP += amount;
}

void	ScavTrap::guardGate() {
	
}

int	ScavTrap::getHP() {
	return (this->HP);
}

int	ScavTrap::getEP() {
	return (this->EP);
}

int	ScavTrap::getAD() {
	return (this->AD);
}

void	ScavTrap::setHP(int data) {
	this->HP = data;
}

void	ScavTrap::setEP(int data) {
	this->EP = data;	
}

void	ScavTrap::setAD(int data) {
	this->AD = data;	
}

std::string	ScavTrap::getName() {
	return (this->name);
}