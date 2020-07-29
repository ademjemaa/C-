/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:32:11 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 11:29:27 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "FragTrap.hpp"

class	ScavTrap : public ClapTrap{
	public :
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		challengeNewcomer(std::string const &target);
};

#endif
