/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:19:12 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:19:14 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter{

    private :
        std::string name;
        AMateria *inventory[4];
    public :
        Character(std::string const &name);
        virtual ~Character();
	    Character(Character const &car);
        Character &operator=(Character const &car);
        std::string const &getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif
