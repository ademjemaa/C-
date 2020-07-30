/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:39:27 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 14:16:48 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class	Enemy{
	protected :
		int		hp;
		std::string type;
	public :
		Enemy(int hp, std::string const & type);
		virtual ~Enemy(void);
		Enemy(const Enemy &emy);
		Enemy &operator=(const Enemy &emy);
		std::string	getType(void) const;
		int		getHP(void)const;
		virtual	void	takeDamage(int);
};

#endif
