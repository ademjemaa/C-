/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 20:17:57 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 21:00:45 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain	&Human::getBrain(void)
{
	return (this->brain);
}

std::string	Human::identify(void) const
{
	return(brain.identify());
}
