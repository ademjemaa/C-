/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:57:21 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/06 18:27:36 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	this->hp = 170;
	this->type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(const SuperMutant &mutant)
{
	*this = mutant;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &mutant)
{
	if (this != &mutant)
	{
		this->hp = mutant.getHP();
		this->type = mutant.getType();
	}
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	if (dmg >= 3)
	{
		this->hp = this->hp - dmg - 3;
		if (this->hp < 0)
			this->hp = 0;
	}
	return ;
}
