/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 12:52:37 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:15:54 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap{
	public :
		SuperTrap(std::string name);
		~SuperTrap(void);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
};

#endif
