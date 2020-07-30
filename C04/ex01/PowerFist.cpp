/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:32:11 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 13:35:23 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

PowerFist::PowerFist()
{
	this->name =  "Power Fist";
	this->damage = 50;
	this->apcost = 8;
	this->effect = "* pschhh... SBAM! *";
}

PowerFist::~PowerFist(void)
{
}

PowerFist::PowerFist(const PowerFist &fist)
{
	*this = rifle;
}

PowerFist	&PowerFist::operator=(const PowerFist &fist)
{
	if (this != &fist)
	{
		this->name = fist.getName();
		this->damage = fist.getDamage();
		this->apcost = fist.getAPCost();
		this->effect =  "* pschhh... SBAM! *";
	}
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << this->effect + '\n';
}
