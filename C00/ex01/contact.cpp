/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 19:05:20 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/04 19:57:35 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::setFirstName(std::string str)
{
	this->first_name = str;
	return ;
}

void	Contact::setLastName(std::string str)
{
	this->last_name = str;
	return ;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
	return ;
}

void	Contact::setLogin(std::string str)
{
	this->login = str;
	return ;
}

void	Contact::setPostalAddress(std::string str)
{
	this->postal_address = str;
	return ;
}

void	Contact::setEmailAddress(std::string str)
{
	this->email_address = str;
	return ;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phone_number = str;
	return ;
}

void	Contact::setBirthdayDate(std::string str)
{
	this->birthday_date = str;
	return ;
}

void	Contact::setFavoriteMeal(std::string str)
{
	this->favorite_meal = str;
	return ;
}

void	Contact::setUnderwearColor(std::string str)
{
	this->underwear_color = str;
	return ;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkest_secret = str;
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string Contact::getLastName(void)
{
	return (this->last_name);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getLogin(void)
{
	return (this->login);
}

std::string Contact::getPostalAddress(void)
{
	return (this->postal_address);
}

std::string Contact::getEmailAddress(void)
{
	return (this->email_address);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phone_number);
}

std::string Contact::getBirthdayDate(void)
{
	return (this->birthday_date);
}

std::string Contact::getFavoriteMeal(void)
{
	return (this->favorite_meal);
}

std::string Contact::getUnderwearColor(void)
{
	return (this->underwear_color);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
}
