/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:59:24 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 11:39:56 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap{
	protected :
		int	HitPoints;
		int	MaxHitPoints;
		int	EnergyPoints;
		int	MaxEnergyPoints;
		int	Level;
		std::string	Name;
		int	MeleeAttackDamage;
		int	RangedAttackDamage;
		int	ArmorDamageReduction;
	public :
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);std::string	getName(void);
		int			getMeleeAttackDamage(void);
		int			getRangedAttackDamage(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
};

#endif
