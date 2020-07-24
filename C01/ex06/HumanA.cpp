/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:34:07 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/09 22:29:00 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : weapon(weapon)
{
	this->name = str;
}

void	HumanA::setName(std::string str)
{
	this->name = str;
}

void	HumanA::setWeapon(Weapon &weap)
{
	this->weapon = weap;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << '\n';
}
