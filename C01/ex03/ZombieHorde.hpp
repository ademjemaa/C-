/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 21:32:36 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 00:27:27 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde{
	private :
		Zombie *horde;
		int		size;
	public :
		ZombieHorde(int);
		void	annonce(void);
		void	setSize(int);
		void	destroy(void);
		void	setZombie(Zombie zomb, int current);
		int		getSize(void);
		Zombie	randomChump(void);
};

#endif
