#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap("", 100, 100, 30) {
	std::cout << "FlagTrap constructor called" << std::endl;
};

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