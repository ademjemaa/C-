/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:41:57 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/02 15:44:17 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy{
		public :
			RadScorpion(void);
			~RadScorpion(void);
			RadScorpion(const RadScorpion &rad);
			RadScorpion &operator=(const RadScorpion &rad);
};

#endif
