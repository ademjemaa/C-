/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:38:48 by adjemaa           #+#    #+#             */
/*   Updated: 2020/09/21 20:16:03 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->xp = 0;
	this->type = type;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria::AMateria(const AMateria &ama)
{
	*this = ama;
	return ;
}

AMateria	&AMateria::operator=(const AMateria &ama)
{
	if (this != &ama)
	{
		this->xp = ama.xp;
		this->type = ama.type;
	}
	return (*this);
}

const std::string 	&AMateria::getType(void) const
{
	return (this->type);
}

unsigned int	AMateria::getXP(void) const
{
	return (this->xp);
}

void AMateria::use(ICharacter &target)
{
	this->xp += 10;
}