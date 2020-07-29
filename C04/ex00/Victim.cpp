/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:30:33 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:49:28 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " + name + " just appeared!\n";
}

Victim::~Victim(void)
{
	std::cout << "Victim " + this->name + " just died for no apparent reason!\n";
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->name + " has been turned into a cute little sheep!\n";
	return ;
}

std::string		Victim::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &output, Victim const &vic)
{
	output << "I'm " + vic.getName() +" and I like otters!\n";
	return (output);
}
