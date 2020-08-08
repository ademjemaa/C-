/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 12:00:37 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/31 17:05:12 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->damage = damage;
	this->apcost = apcost;
	this->effect = "";
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(const AWeapon &wep)
{
	*this = wep;
}

AWeapon		&AWeapon::operator=(const AWeapon &wep)
{
	if (this != &wep)
	{
		this->name = wep.getName();
		this->damage = wep.getDamage();
		this->apcost = wep.getAPCost();
		this->effect = "";
	}
	return (*this);
}

std::string	AWeapon::getName(void)const
{
	return (this->name);
}

int		AWeapon::getDamage(void)const
{
	return (this->damage);
}

int		AWeapon::getAPCost(void)const
{
	return (this->apcost);
}

void	AWeapon::attack(void)const
{
	std::cout << this->effect + '\n';
	return ;
}
