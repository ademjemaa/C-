/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 23:38:59 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 00:27:54 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony();
	pony->setPonyName("Chad");
	pony->setPonyHeight("3 hot dogs");
	pony->setPonyAge("2 fourth of july's");
	pony->setPonyHair("stronk");
	std::cout<<"Our stack pony is named " + pony->getPonyName() + " and his height is "
		+ pony->getPonyHeight() + ", he is " + pony->getPonyAge() +
		" old and his hair is obviously " + pony->getPonyHair() + '\n';
	delete pony;
	return ;
}

void	ponyOnTheStack(void)
{
	Pony pony;

	pony.setPonyName("alexander");
	pony.setPonyHeight("3 baguettes");
	pony.setPonyAge("17 full moons");
	pony.setPonyHair("fabulous");
	std::cout<<"Our stack pony is named " + pony.getPonyName() + " and his height is "
		+ pony.getPonyHeight() + ", he is " + pony.getPonyAge() +
		" old and his hair is obviously " + pony.getPonyHair() + '\n';
	return ;

}

int main()
{
	std::cout<<"Generating Stack Pony\n";
	ponyOnTheStack();
	std::cout<<"Generating Heap Pony\n";
	ponyOnTheHeap();
	return (0);
}
