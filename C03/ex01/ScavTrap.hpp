/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:32:11 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 14:59:37 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "FragTrap.hpp"

class	ScavTrap : Public FragTrap{
	public :
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		challengeNewcomer(std::string const &target);
};

#endif
