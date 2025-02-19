/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 01:48:16 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/19 01:51:24 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
	
class	DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	name;


	public:
		DiamondTrap();
		~DiamondTrap();

		
};

#endif
