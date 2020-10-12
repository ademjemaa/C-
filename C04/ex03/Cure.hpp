/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:19:27 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:19:29 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        virtual ~Cure();
        Cure(const Cure &cur);
		Cure &operator=(const Cure &cur);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
