/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 02:45:26 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/11 04:33:07 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(std::string s1, std::string s2, std::string filename)
{
	std::ifstream	read(filename);
	std::ofstream	write;
	std::string	line;
	int i;

	i = 0;
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "Empty strings error\n";
		return ;
	}
	if (read.fail())
	{
		std::cout << "File error\n";
		return ;
	}
	while (filename[i])
	{
		filename[i] = toupper(filename[i]);
		i++;
	}
	filename.append(".replace");
	write.open(filename, std::ios::out | std::ios::trunc);
	int found;
	while (getline(read, line))
	{
		found = line.find(s1);
		while (found != -1)
		{
			line.replace(line.find(s1), s1.length(), s2);
			found = line.find(s1);
		}
		write << line;
	   	write << '\n';
	}
	std::cout << "occurences were replaced\n";
	write.close();
}

int main()
{
	replace("i", "ouuuuuuuuuuuuu", "test.txt");
	replace("rabbit", "chicken", "story");
	replace("", "maybe an error", "one.txt");
	replace("not empty", "empty", "boo");
}
