/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:24:51 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 14:20:55 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	this->name = "Plasma Rifle";
	this->damage = 21;
	this->apcost = 5;
	this->effect = "* piouuu piouuu piouuu *";
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rifle)
{
	*this = rifle;
}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &rifle)
{
	if (this != &rifle)
	{
		this->name = rifle.getName();
		this->damage = rifle.getDamage();
		this->apcost = rifle.getAPCost;
		this->effect = "* piouuu piouuu piouuu *";
	}
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << this->effect + '\n';
	return ;
}
