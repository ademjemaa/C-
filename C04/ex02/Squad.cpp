/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:36:55 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 04:58:32 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->squad = NULL;
	return ;
}

Squad::~Squad(void)
{
	node	*tmp;

	while (this->squad)
	{
		tmp = this->squad;
		this->squad = this->squad->next;
		delete tmp->marine;
	}
}

Squad::Squad(const Squad &gang)
{
	node	*tmp;

	tmp = gang.squad;
	while (tmp != NULL)
	{
		this->push(tmp->marine);
		tmp = tmp->next;
	}
}

Squad	&Squad::operator=(const Squad &gang)
{
	node	*tmp;
	if (this != &gang)
	{
		if (this->squad != NULL)
		{
			while (this->squad)
			{
				tmp = this->squad;
				this->squad = this->squad->next;
				delete tmp->marine;
			}
		}
		tmp = gang.squad;
		while (tmp != NULL)
		{
			this->push(tmp->marine);
			tmp = tmp->next;
		}
	}
	return (*this);
}

int		Squad::getCount(void) const
{
	node	*tmp;
	
	int i;
	i = 0;
	tmp = this->squad;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	node	*tmp;

	tmp = this->squad;
	if (n < 0)
		return (NULL);
	for (int i = 0; i < n || tmp == NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	return (tmp->marine);
		
}

int		Squad::push(ISpaceMarine *marine)
{
	node	*tmp;

	int		i;
	i = 0;
	tmp = this->squad;
	if (marine == NULL)
		return (0);
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			if (marine == tmp->marine)
				return (0);
			tmp = tmp->next;
			i++;
		}
	}
	else
	{
		this->squad = new node;
		this->squad->marine = marine;
		this->squad->next = NULL;
		return (0);
	}
	tmp->next = new node;
	tmp->next->marine = marine;
	tmp->next->next = NULL;
	return (i + 1);
}
