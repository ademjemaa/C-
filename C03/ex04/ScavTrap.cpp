/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:37:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:14:57 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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
	std::cout<< name + "(ScavTrap) says : \"Tell me what to shoot and how much I'm gettin' paid.\"\n";
	return ;
}

ScavTrap::~ScavTrap(void)
{
	if (this->HitPoints == 0)
		std::cout <<  "\"Yup. I'm " + this->Name + " and I'm a total idiot. Hah!\"\n";
	else
		std::cout << "\"CLAPTRAP! MAKE IT STOP!\"\n";
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int rando;
	srand((unsigned int)time(NULL));
	rando = rand() % 5;
	switch (rando)
	{
		case 0 :
			std::cout << '<' + this->Name + "> : \"I challenge you to a slappig competiton !\"\n";
			break ;
		case 1 :
			std::cout << '<' + this->Name + "> : \"I challenge you to a beer pong competition !\"\n";
			break ;
		case 2 :
			std::cout << '<' + this->Name + "> : \"I challenge you to a donut eating competiton !\"\n";
			break ;
		case 3 :
			std::cout << '<' + this->Name + "> : \"I challenge you to a rubik's cube solving competition!\"\n";
			break ;
		case 4 :
			std::cout << '<' + this->Name + "> : \"I challenge you to a groove dancing competition! \"\n";
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
