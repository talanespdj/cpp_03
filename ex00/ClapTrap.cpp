/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:26:12 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 00:23:21 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called no parameters" << std::endl;
};

ClapTrap::ClapTrap(std::string init) : name(init), HP(10), EP(10), AD(0) {
	std::cout << getName() << " Constructor called" << std::endl;
};

ClapTrap::~ClapTrap() {
	std::cout << getName() << " Claptrapcalled" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f) {
		this->name = f.name;
		this->HP = f.HP;
		this->EP = f.EP;
		this->AD = f.AD;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (!getHP() || !getEP()) {
		std::cout << name << " cannot attack anyone, no HP/EP left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << getAD() << " points of damage!" << std::endl;
	this->EP--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (getHP() <= 0) {
		std::cout << "Don't fight dead people mate." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " lost " << amount << " Hit points." << std::endl;
	this->HP -= amount;
	if (getHP() <= 0)
		std::cout << "ClapTrap " << name << " died of excruciating pain." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!getHP() || !getEP()) {
		std::cout << name << " cannot repair itself , no HP/EP left." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " repairs itself and gain one HP." << std::endl;
	this->HP += amount;
}

void	ClapTrap::setName(std::string data) {
	this->name = data;
}

void	ClapTrap::setHP(int data) {
	this->HP = data;
}

void	ClapTrap::setEP(int data) {
	this->EP = data;	
}

void	ClapTrap::setAD(int data) {
	this->AD = data;	
}

std::string	ClapTrap::getName() {
	return (this->name);
}

int	ClapTrap::getHP() {
	return (this->HP);
}

int	ClapTrap::getEP() {
	return (this->EP);
}

int	ClapTrap::getAD() {
	return (this->AD);
}
