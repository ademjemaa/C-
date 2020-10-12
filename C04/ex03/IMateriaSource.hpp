/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:19:56 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:19:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
	
# include "AMateria.hpp"

class IMateriaSource
{
    public:
	    virtual ~IMateriaSource() {}
	    virtual void learnMateria(AMateria *m) = 0;
	    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
