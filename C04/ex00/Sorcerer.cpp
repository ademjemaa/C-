/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:46:06 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:47:48 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name + ", " + title + ", is born!\n";
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name + ", " + this->title + ", is dead. Consequences will never be the same!\n";
}

Sorcerer::Sorcerer(const Sorcerer &mage)
{
	*this = mage;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &mage)
{
	if (this != &mage)
	{
		this->name = mage.getName();
		this->title = mage.getTitle();
	}
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}

void	Sorcerer::setName(std::string name)
{
	this->name = name;
	return ;
}

void	Sorcerer::setTitle(std::string title)
{
	this->title = title;
	return ;
}

void	Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
	return ;
}

std::ostream	&operator<<(std::ostream &output, Sorcerer const &mage)
{
	output << "I am " + mage.getName() + ", " + mage.getTitle() + ", and I like ponies!\n";
	return (output);
}
