/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:20:10 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:20:11 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        virtual ~Ice();
        Ice(const Ice &snow);
		Ice &operator=(const Ice &cur);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
