/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 12:52:22 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:13:28 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 20;
	this->ArmorDamageReduction = 5;
	std::cout<< name + "(SuperTrap) says : \"Let's get this party started!\"\n";
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << '>' + this->Name + "> (SuperTrap) : \"another one bites the dust\"\n";
	return ;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
	return ;
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
	return ;
}
