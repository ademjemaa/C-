/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:37:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:32:45 by adjemaa          ###   ########.fr       */
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

int		ScavTrap::getRangedAttackDamage(void)
{
	return (this->RangedAttackDamage);
}

int		ScavTrap::getMeleeAttackDamage(void)
{
	return (this->MeleeAttackDamage);
}

std::string	ScavTrap::getName(void)
{
	return (this->Name);
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->ArmorDamageReduction;
	if ((int)amount >= this->HitPoints)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << '<' + this->Name + "> attacks <" + target + "> at range, causing <"\
		+ std::to_string(this->RangedAttackDamage) + "> points of damage! " + this->Name +\
		", \"Right. Kill him. Got it.\"\n";
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
	int rando;
	srand((unsigned int)time(NULL));
	rando = rand() % 5;
	switch (rando)
	{
		case 0 :
			std::cout << '<' + this->Name + "> : \"I challenge you " + target + " to a slappig competiton !\"\n";
			break ;
		case 1 :
			std::cout << '<' + this->Name + "> : \"I challenge you " + target + " to a beer pong competition !\"\n";
			break ;
		case 2 :
			std::cout << '<' + this->Name + "> : \"I challenge you " + target + " to a donut eating competiton !\"\n";
			break ;
		case 3 :
			std::cout << '<' + this->Name + "> : \"I challenge you " + target + " to a rubik's cube solving competition!\"\n";
			break ;
		case 4 :
			std::cout << '<' + this->Name + "> : \"I challenge you " + target + " to a groove dancing competition! \"\n";
			break ;
	}
	while (1)
	{
		int	randi = rand() % 2;
		if (randi)
		{
			std::cout << '<' + this->Name + "> : gets shot from behind with ranged attack, loses " +\
			std::to_string(this->RangedAttackDamage) + " health points, turns out guns solve conflicts faster than challenges\n";
			this->HitPoints = this->HitPoints - this->RangedAttackDamage;
			if (this->HitPoints <= 0)
			{
				this->HitPoints = 0;
				std::cout << '<' + this->Name + "> has been killed\n";
			}
			else
				std::cout << '<' + this->Name + "> : has " + std::to_string(this->HitPoints) + " health points left\n";
			return ;
		}
		else
		{
			int	randu = rand() % 3;
			if (randu == 0)
				std::cout << '<' + this->Name + "> : \"I did not believe in your power when you first walked in here but now i do, I lose this challenge\"\n";
			else if (randu == 1)
				std::cout << '<' + this->Name + "> : \"Loser, did you really think you had a chance against me ?\"\n";
			else
				std::cout << '<' + this->Name + "> : \"Intresting, it seems our skills are matched, what did you say your name was again ?\"\n";
		}
		break ;
	}

}
