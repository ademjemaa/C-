/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:37:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 14:59:35 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 50;
	this->MaxEnergyPoints = 50;
	this->Level = 1;
	this->MeleeAttackDamage = 20;
	this->RangedAttackDamage = 15;
	this->ArmorDamageReduction = 3;
	std::cout<< name + " here. Tell me what to shoot and how much I'm gettin' paid.\"\n";
	return ;
}

ScavTrap::~ScavTrap(void)
{
	if (this->HitPoints == 0)
		std::cout <<  "\"Yup. I'm " + this->Name + " and I'm a total idiot. Hah!\"\n";
	else
		std::cout << "\"CLAPTRAP! MAKE IT STOP!\"\n";
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << '<' + this->Name + "> attacks <" + target + "> at range, causing <"\
		+ std::to_string(this->RangedAttackDamage) + "> points of damage !\n" + this->Name +\
		"\"Right. Kill him. Got it.\"\n";
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->Name + ": \"I'm just warming up.\"\n" + '<' + this->Name +\
		"> attacks <" + target + "> with a machete, causing <" + std::to_string(this->MeleeAttackDamage) +\
		"> points of damage !\n";
	return ;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{

}
