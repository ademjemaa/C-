/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:44:04 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/06 18:40:25 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->wep = NULL;
}

Character::~Character(void)
{
}

Character::Character(const Character &car)
{
	*this = car;
}

Character	&Character::operator=(const Character &car)
{
	if (this != &car)
	{
		this->name = car.getName();
		this->ap = car.getAP();
		this->wep = car.getWep();
	}
	return (*this);
}

void	Character::setName(std::string name)
{
	this->name = name;
}

void	Character::setAP(int ap)
{
	this->ap = ap;
}

void	Character::setWep(AWeapon &wep)
{
	this->wep = &wep;
}

std::string	Character::getName(void)const
{
	return (this->name);
}

int	Character::getAP(void)const
{
	return (this->ap);
}

AWeapon	*Character::getWep(void)const
{
	return (this->wep);
}

void	Character::recoverAP(void)
{
	this->ap = this->ap + 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::equip(AWeapon *wep)
{
	this->wep = wep;
	return ;
}

void	Character::attack(Enemy *emy)
{
	if (this->wep != NULL)
	{
		this->ap = this->ap - this->wep->getAPCost();
		if (this->ap >= 0)
		{
			std::cout << this->name + " attacks " + emy->getType() + " with a " + this->wep->getName() + '\n';
			this->wep->attack();
			emy->takeDamage(this->wep->getDamage());
			if (emy->getHP() <= 0)
				delete emy;
		}
		else
		{
			this->ap = this->ap + this->wep->getAPCost();
			std::cout << this->name + " only has " + std::to_string(this->ap) + " AP, please reload\n";
		}	
	}
	else
		return ;

}

std::ostream &operator<<(std::ostream &output, Character const &chara)
{
	if (chara.getWep() != NULL)
		output << chara.getName() + " has " + std::to_string(chara.getAP()) + " AP and wields a " + (chara.getWep())->getName() + '\n';
	else
		output << chara.getName() + " has " + std::to_string(chara.getAP()) + " AP and is unarmed\n";
	return (output);
}
