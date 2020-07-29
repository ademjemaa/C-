/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:53:09 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:25:10 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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
	std::cout<< name + "(FragTrap) says : \"Let's get this party started!\"\n";
	return ;
}

FragTrap::~FragTrap(void)
{
	if (this->HitPoints == 0)
		std::cout << '<' + this->Name + "> Remember me as a warrior\n";
	else
		std::cout << this->Name + " says : RUN FOR YOUR LIIIIIVES!!!\n";
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
		std::cout << target + " is tired of this s***\n";
	}
}
