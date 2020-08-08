/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 16:47:58 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/04 20:03:02 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
	private :
		std::string name;
		int	ap;
		AWeapon *wep;
	public :
		Character(std::string const &name);
		virtual ~Character(void);
		Character(const Character &car);
		Character &operator=(const Character &car);
		void	setName(std::string name);
		void	setAP(int ap);
		void	setWep(AWeapon &wep);
		std::string	getName(void)const;
		int		getAP(void)const;
		AWeapon	*getWep(void)const;
		void recoverAP(void);
		void equip(AWeapon*);
		void attack(Enemy*);
};

std::ostream &operator<<(std::ostream &output, Character const &chara);

#endif
