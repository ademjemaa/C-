/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dial.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 18:16:02 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/05 22:17:01 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	clean_string(std::string str)
{
	if ((int)str.length() < 10)
	{
		for (int i = (int)str.length(); i < 10; i++)
			str.insert(0, " ");
	}
	else if ((int)str.length() > 10)
	{
		str.erase(9, ((int)str.length() - 9));
		str.push_back('.');
	}
	std::cout<<str;
}

std::string	change(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
		str[i] = toupper(str[i]);
	return (str);
}

void	ShowBook(Contact contacts[8], int cur)
{
	if (cur == 0)
	{
		std::cout<<"Phone Book is empty, you are a law abiding citizen\n";
		return ;
	}
	std::cout<<"showing current contacts :\n";
	for (int i = 0; i < cur; i++)
	{
		std::cout<<"|         "<< i + 1 << '|';
		clean_string(contacts[i].getFirstName());
		std::cout<<"|";
		clean_string(contacts[i].getLastName());
		std::cout<<"|";
		clean_string(contacts[i].getNickname());
		std::cout<<"|\n";
	}
	return ;
}

Contact	addcontact(void)
{
	Contact con;
	std::string input;

	std::cout<<"Please insert contact first name\n";
	std::cin >> input;
	con.setFirstName(input);
	std::cout<<"Please insert contact last name\n";
	std::cin >> input;
	con.setLastName(input);
	std::cout<<"Please insert contact nickname\n";
	std::cin >> input;
	con.setNickname(input);
	std::cout<<"Please insert contact login\n";
	std::cin >> input;
	con.setLogin(input);
	std::cout<<"Please insert contact postal address\n";
	std::cin >> input;
	con.setPostalAddress(input);
	std::cout<<"Please insert contact email address\n";
	std::cin >> input;
	con.setEmailAddress(input);
	std::cout<<"Please insert contact phone number\n";
	std::cin >> input;
	con.setPhoneNumber(input);
	std::cout<<"Please insert contact birthday date\n";
	std::cin >> input;
	con.setBirthdayDate(input);
	std::cout<<"Please insert contact favorite meal\n";
	std::cin >> input;
	con.setFavoriteMeal(input);
	std::cout<<"Please insert contact underwear color\n";
	std::cin >> input;
	con.setUnderwearColor(input);
	std::cout<<"Please insert contact darkest secret\n";
	std::cin >> input;
	con.setDarkestSecret(input);
	return (con);
}

int main()
{
	int	current = 0;
	Contact contacts[8];
	std::string input;

	std::cout<<"WELCOME TO THE SAUL PHONEBOOK\n";
	std::cout<<"How can we help you today ?\n";
	std::cout<<"to add a new contact type \"add\"\n";
	std::cout<<"to look for a contact type \"search\"\n";
	std::cout<<"to close and exit the phone book type \"exit\"\n";
	std::cin >> input;
	input = change(input);
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
		{
			if (8 <= current)
				bouncer();
			else
				contacts[current++] = addcontact();
		}
		else if (input.compare("SEARCH") == 0)
			ShowBook(contacts, current);
		std::cout<<"Commands are : exit, add, search\n";
		std::cin >> input;
		input = change(input);
	}
	return (0);
}
