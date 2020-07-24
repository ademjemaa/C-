/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 00:41:44 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 01:51:12 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

class Zombie{
	private :
		std::string name;
		std::string type;
		int			power;
	public :
		void	setName(std::string);
		void	setType(std::string);
		void	setPower(int);
		std::string getName(void);
		std::string getType(void);
		int			getPower(void);
		std::string	advert(void);
};

#endif
