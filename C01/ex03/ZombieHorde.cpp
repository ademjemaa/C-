/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 21:36:41 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 00:27:20 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->horde = new Zombie[n];
	this->size = n;
	for (int i = 0; i < n; i++)
	{
		this->setZombie(randomChump(), i);
		this->horde[i].setType("together");
	}
}

Zombie	ZombieHorde::randomChump(void)
{
	Zombie zombie;
	char vowels[] = {'e' , 'y', 'u', 'i', 'o', 'a'};
	char letters[] = {'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
					'z', 'x', 'c', 'v', 'b', 'n', 'm'};
	std::string str;
	int rando = (rand() % 10) + 5;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < rando; i++)
	{
		if (i % 2 != 0)
			str.push_back(vowels[rand() % 5]);
		else if (i == (int)(rando / 2))
			str.push_back(' ');
		else
			str.push_back(letters[rand() % 19]);
	}
	zombie.setName(str);
	return (zombie);
}

void	ZombieHorde::destroy(void)
{
	delete[] this->horde;
	delete(this);
}

void	ZombieHorde::setZombie(Zombie zomb, int current)
{
	this->horde[current].setName(zomb.getName());
}

void	ZombieHorde::annonce(void)
{
	for (int i = 0; i < this->getSize(); i++)
		std::cout<<'<' + this->horde[i].getName() + " (" + this->horde[i].getType() + ")> Braiiiiiiinnnssss...\n";
	return ;
}

void	ZombieHorde::setSize(int n)
{
	this->size = n;
}

int		ZombieHorde::getSize(void)
{
	return (this->size);
}
