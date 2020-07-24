/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 01:01:23 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 02:00:45 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string str)
{
	this->zombie.setType(str);
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	zombie->setType("dead");
	zombie->setPower(rand() % 10);
	return zombie;
}

void	ZombieEvent::annonce(void)
{
	std::cout<< this->zombie.advert();
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	char vowels[] = {'e' , 'y', 'u', 'i', 'o', 'a'};
	char letters[] = {'q', 'w', 'r', 't', 'p', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
					'z', 'x', 'c', 'v', 'b', 'n', 'm'};
	std::string str;
	srand((unsigned int)time(NULL));
	int rando = (rand() % 10) + 5;
	for (int i = 0; i < rando; i++)
	{
		if (i % 2 != 0)
			str.push_back(vowels[rand() % 5]);
		else if (i == (int)(rando / 2))
			str.push_back(' ');
		else
			str.push_back(letters[rand() % 19]);
	}
	zombie = newZombie(str);
	zombie->setName(str);
	return (zombie);	
}
