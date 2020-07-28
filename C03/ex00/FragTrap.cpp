/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:53:09 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 13:46:57 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 100;
	this->MaxHitPoints = 100;
	this->EnergyPoints = 100;
	this->MaxEnergyPoints = 100;
	this->Level = 1;
	this->MeleeAttackDamage = 30;
	this->RangedAttackDamage = 20;
	this->ArmorDamageReduction = 5;
	std::cout<< name + " says : \"Let's get this party started!\"\n";
	return ;
}

FragTrap::~FragTrap(void)
{
	if (this->HitPoints == 0)
		std::cout << '<' + this->Name + "> Remember me as a warrior\n";
	else
		std::cout << this->Name + " says : RUN FOR YOUR LIIIIIVES!!!\n";
}

int		FragTrap::getRangedAttackDamage(void)
{
	return (this->RangedAttackDamage);
}

int		FragTrap::getMeleeAttackDamage(void)
{
	return (this->MeleeAttackDamage);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" + this->Name + "> attacks <" + target + "> at range, causing <"\
		+ std::to_string(this->RangedAttackDamage) + "> points of damage!\n" + this->Name +\
		" :\"Oh, quit falling to pieces.\"\n";
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->Name + ": \"Take that!\"\n" + "FR4G-TP <" + this->Name + "> attacks <"
		+ target + "> with a sword, causing <" + std::to_string(this->MeleeAttackDamage) +\
		"> points of damage!\n";
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

std::string	FragTrap::getName(void)
{
	return (this->Name);
}

void	FragTrap::fireElement(void)
{
	std::cout << '<' + this->Name + "> \"Remember, use caution near an open flame!\"\n";
	return ;
}

void	FragTrap::explosiveElement(void)
{
	std::cout << '<' + this->Name+ "> \"Now with extra kapow!\"\n";
	return ;
}

void	FragTrap::cryoElement(void)
{
	std::cout << '<' + this->Name + "> \"Know what killed the baddies? The Ice age.\"\n";
	return ;
}

void	FragTrap::corrosiveElement(void)
{
	std::cout << '<' + this->Name + "> \"I'm a mean, green, acid machine!\"\n";
	return ;
}

void	FragTrap::shockElement(void)
{
	std::cout << '<' + this->Name + "> \"I've finally got an electric personality!\"\n";
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		rando;
	srand((unsigned int)time(NULL));
	if (this->EnergyPoints < 25)
	{
		std::cout << "You dont have enough energy to activate this skill\n";
		return ;
	}
	else
	{
		rando = rand() % 5;
		switch (rando)
		{
			case 0 :
				shockElement();
				break ;
			case 1 :
				corrosiveElement();
				break;
			case 2 :
				cryoElement();
				break;
			case 3 :
				explosiveElement();
				break;
			case 4 :
				fireElement();
				break;
		}
	}
}
