/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:21:56 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/11 01:22:45 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap 
{
	private: 
		std::string	name;
		int		HP;
		int		EP;
		int		AD;

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap& f);
		ScavTrap& operator=(const ScavTrap& f);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	guardGate();

		void	setHP(int data);
		void	setEP(int data);
		void	setAD(int data);

		int	getHP();
		int	getEP();
		int	getAD();

		std::string	getName();
};

#endif
