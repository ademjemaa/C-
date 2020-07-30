/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:45:17 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 14:16:27 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(const Enemy &emy)
{
	*this = emy;
}

Enemy	&Enemy::operator=(const Enemy &emy)
{
	if (this != &emy)
	{
		this->hp = emy.getHP();
		this->type = emy.getType();
	}
	return (*this);
}

std::string		Enemy::getType(void)const
{
	return (this->type);
}

int			Enemy::getHP(void)const
{
	return (this->hp);
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg >= 0)
	{
		this->hp = this->hp - dmg;
		if (this->hp < 0)
			this->hp = 0;
	}
	return ;
}
