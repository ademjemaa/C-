/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 11:46:13 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:12:48 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public :
		void		fireElement(void);
		void		explosiveElement(void);
		void		cryoElement(void);
		void		corrosiveElement(void);
		void		shockElement(void);
		void		vaulthunter_dot_exe(std::string const &target);
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
