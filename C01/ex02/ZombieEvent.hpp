/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 00:58:12 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 01:42:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{
	private :
		Zombie	zombie;
	public :
		void	setZombieType(std::string str);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
		void	annonce(void);
};

#endif
