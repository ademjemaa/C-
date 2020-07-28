/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:46:13 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 13:34:31 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap{
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
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		fireElement(void);
		void		explosiveElement(void);
		void		cryoElement(void);
		void		corrosiveElement(void);
		void		shockElement(void);
		void		vaulthunter_dot_exe(std::string const &target);
		std::string	getName(void);
		int			getMeleeAttackDamage(void);
		int			getRangedAttackDamage(void);
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
