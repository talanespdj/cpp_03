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

class	ScavTrap : virtual public ClapTrap 
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string init);
		ScavTrap(const ScavTrap& f);
		ScavTrap& operator=(const ScavTrap& f);

		void	attack(const std::string& target);
		void	guardGate();
};

#endif