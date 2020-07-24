/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 23:34:24 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 00:18:52 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>
#include <stdio.h>

class Pony {
	private :
		std::string		pony_name;
		std::string		pony_height;
		std::string		pony_age;
		std::string		pony_hair;
	public :
		std::string getPonyName(void);
		std::string getPonyHeight(void);
		std::string getPonyAge(void);
		std::string getPonyHair(void);
		void	setPonyName(std::string str);
		void	setPonyHeight(std::string str);
		void	setPonyAge(std::string str);
		void	setPonyHair(std::string str);
};

#endif
