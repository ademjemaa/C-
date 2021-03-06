/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:32:11 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 10:42:37 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "FragTrap.hpp"

class	ScavTrap{
	private :
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
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		challengeNewcomer(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void);
		int			getMeleeAttackDamage(void);
		int			getRangedAttackDamage(void);
};

#endif
