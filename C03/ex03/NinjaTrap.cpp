/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 11:44:15 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 12:58:59 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->HitPoints = 60;
	this->MaxHitPoints = 60;
	this->EnergyPoints = 120;
	this->MaxEnergyPoints = 120;
	this->Level = 1;
	this->MeleeAttackDamage = 60;
	this->RangedAttackDamage = 5;
	this->ArmorDamageReduction = 0;
	std::cout<< name + " says : \"I hope you're ready for some ass kicking\"\n";
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->Name + " : \"Well i have errands to run, let's catch up another time\"\n";
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << '<' + this->Name + "> : \"It's a pleasure to see you again " + target.getName() + "\"\n";
	target.beRepaired(25);
	return ;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << '<' + this->Name + "> : \"Oh hello " + target.getName() + ", would you like to try these shoes out ?\"\n";
	target.beRepaired(15);
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << '<' + this->Name + "> : \"Ew its " + target.getName() + ", catch this loser\"\n";
	target.takeDamage(this->RangedAttackDamage);
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << '>' + this->Name + "> : \"I was waiting for you " + target.getName() + " now TAKE THIS\"\n";
	target.takeDamage(this->MeleeAttackDamage);
	return ;
}
