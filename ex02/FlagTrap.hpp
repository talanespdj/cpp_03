#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class	 FlagTrap : public ClapTrap
{
	private:

	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap(const FlagTrap& f);
		FlagTrap& operator=(const FlagTrap& f);

		void	highFivesGuys(void);
};

#endif


