/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 19:08:31 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/04 19:57:47 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public :
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickname(std::string);
		void	setLogin(std::string);
		void	setPostalAddress(std::string);
		void	setEmailAddress(std::string);
		void	setPhoneNumber(std::string);
		void	setBirthdayDate(std::string);
		void	setFavoriteMeal(std::string);
		void	setUnderwearColor(std::string);
		void	setDarkestSecret(std::string);
		std::string	getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getLogin(void);
		std::string getPostalAddress(void);
		std::string getEmailAddress(void);
		std::string getPhoneNumber(void);
		std::string getBirthdayDate(void);
		std::string getFavoriteMeal(void);
		std::string getUnderwearColor(void);
		std::string getDarkestSecret(void);
};

void	bouncer(void);

#endif
