/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:46:30 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/02 15:41:53 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy{
	public :
		SuperMutant();
		~SuperMutant(void);
		SuperMutant(const SuperMutant &mutant);
		SuperMutant &operator=(const SuperMutant &mutant);
		void	takeDamage(int);

};

#endif
