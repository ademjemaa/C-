/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 11:17:03 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:13:56 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 0;
	this->MaxHitPoints = 0;
	this->EnergyPoints = 0;
	this->MaxEnergyPoints = 0;
	this->Level = 0;
	this->MeleeAttackDamage = 0;
	this->RangedAttackDamage = 0;
	this->ArmorDamageReduction = 0;
	std::cout<< name + "(ClapTrap) : \"I am AWAKE \"\n";
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Cya another day kiddo\n";
}

int		ClapTrap::getRangedAttackDamage(void)
{
	return (this->RangedAttackDamage);
}

int		ClapTrap::getMeleeAttackDamage(void)
{
	return (this->MeleeAttackDamage);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" + this->Name + "> attacks <" + target + "> at range, causing <"\
		+ std::to_string(this->RangedAttackDamage) + "> points of damage!\n" + this->Name +\
		" :\"Oh, quit falling to pieces.\"\n";
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->Name + ": \"Take that!\"\n" + "FR4G-TP <" + this->Name + "> attacks <"
		+ target + "> with a sword, causing <" + std::to_string(this->MeleeAttackDamage) +\
		"> points of damage!\n";
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->ArmorDamageReduction;
	if (amount >= this->HitPoints)
	{
		this->HitPoints = 0;
		std::cout << "\"Argh arghargh death gurgle gurglegurgle urgh... death.\"\n";
		std::cout << '<' + this->Name + "> has died\n";
	}
	else
	{
		this->HitPoints = this->HitPoints - amount;
		std::cout << '<' + this->Name + "> : \"Ow, what was that for?\"\n";
		std::cout << "current HP : " + std::to_string(this->HitPoints) + '\n';
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints == 0)
		std::cout << '<' + this->Name + "> :\"Can I just say... yeehaw.\"\n";
	else
		std::cout << '<' + this->Name + "> \"Health! Eww, what flavor is red?\"\n";
	amount = this->HitPoints + amount;
	if (amount > 100)
		this->HitPoints = 100;
	else
		this->HitPoints = amount;
}

std::string	ClapTrap::getName(void)
{
	return (this->Name);
}
