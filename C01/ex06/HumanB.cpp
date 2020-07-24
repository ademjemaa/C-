/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:34:07 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/09 22:27:02 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
}

void	HumanB::setName(std::string str)
{
	this->name = str;
}

void	HumanB::setWeapon(Weapon &weap)
{
	this->weapon = &weap;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << '\n';
}
