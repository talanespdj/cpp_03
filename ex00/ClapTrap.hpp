/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:21:56 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/10 23:00:25 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap {
	private: 
		std::string	name;
		int		HP;
		int		EP;
		int		AD;

	public:
		ClapTrap(std::string init);
		~ClapTrap();
		ClapTrap(const ClapTrap& f);
		ClapTrap& operator=(const ClapTrap& f);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setHP(int data);
		void	setEP(int data);
		void	setAD(int data);

		int	getHP();
		int	getEP();
		int	getAD();

		std::string	getName();
};

#endif