/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:11:16 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 21:16:10 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	srand((unsigned int)time(NULL));
	this->iq = (rand() % 70) + 50;
	this->cancer = (rand() % 2) - 1;
}

std::string	Brain::identify(void) const
{
	std::stringstream ref;
	ref << this;
	return (ref.str());
}
