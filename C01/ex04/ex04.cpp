/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:45:44 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 19:49:29 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string &str1 = str;
	std::string *ptr = &str;
	std::cout<<str1 << '\n';
	std::cout<<*ptr << '\n';
}
