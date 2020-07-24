/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 00:52:57 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 02:01:48 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombiette;
	ZombieEvent one;
	Zombie zombie;
	zombie.setName("tyler");
	zombie.setType("stronk");
	zombie.setPower(10);
	std::cout<< zombie.advert();
	zombiette = one.randomChump();
	std::cout<<zombiette->advert();
	delete (zombiette);
	return (0);
}
