/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:48:45 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 15:01:32 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

int is_number(std::string num)
{
	for(size_t i = 0; i < num.length(); i++)
		if(!std::isdigit(num[i]))
			return (0);
	return (1);
}

phonebook::phonebook(void) : size(0) {}

void phonebook::AddPhonebook(void)
{
	int i = size++ % 8;
	informations[i].updatecontact();
	std::cout << std::endl;
}

void phonebook::SearchPhonebook(void)
{
	std::string index;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     index|    f.name|    l.name|  nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	for(int i = 0; i < 8; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << informations[i].get_first_name_show() << "|";
		std::cout << std::setw(10) << informations[i].get_last_name_show() << "|";
		std::cout << std::setw(10) << informations[i].get_nickname_show() << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
	std::cout << std::endl;
	int i = -42;

	while(i != 0)
	{
		std::cout << "Select Number < '1' ~ '8' or '0' to exit > : ";
		std::getline(std::cin, index);

		if(std::cin.eof())
			break;
		if(index.empty() || !is_number(index))
		{
			std::cout << "Empty or Wrong number." << std::endl << "Please correct Number input" << std::endl;
			continue;
		}
		std::istringstream(index) >> i;

		if(i >= 1 && i <= 8)
		{
			std::cout << "First Name : " << informations[i - 1].get_first_name() << std::endl;
			std::cout << "Last Name : " << informations[i - 1].get_last_name() << std::endl;
			std::cout << "Nick Name : " << informations[i - 1].get_nickname() << std::endl;
			std::cout << "Phone Number : " << informations[i - 1].get_phone_number() << std::endl;
			std::cout << "Darkest Secret : " << informations[i - 1].get_darkest_secret() << std::endl;
		}
	}
}
