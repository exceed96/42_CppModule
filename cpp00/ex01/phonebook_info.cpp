/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_info.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:20:10 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 15:03:43 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook_info.hpp"

void delete_blank(std::string *str)
{
	std::string blank = "\t\n\v\f\r ";
	int start = (*str).find_first_not_of(blank);
	int end = (*str).find_last_not_of(blank);
	int len = end - start + 1;

	if (start == - 1 || end == -1)
		*str = "";
	*str = (*str).substr(start, len);
}

void get_input(std::string *info, std::string content)
{
	while (info->empty())
	{
		std::cout << content;
		std::getline(std::cin, *info);
		if(std::cin.eof())
			break;
		delete_blank(info);
	}
}

Information::Information(void) : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}

std::string Information::get_first_name(void)
{
	return first_name;
}

std::string Information::get_last_name(void)
{
	return last_name;
}

std::string Information::get_nickname(void)
{
	return nickname;
}

std::string Information::get_phone_number(void)
{
	return phone_number;
}

std::string Information::get_darkest_secret(void)
{
	return darkest_secret;
}

std::string Information::get_first_name_show(void)
{
	if(first_name.length() > 10)
		return (first_name.substr(0, 9) + ".");
	return first_name;
}

std::string Information::get_last_name_show(void)
{
	if(last_name.length() > 10)
		return (last_name.substr(0, 9) + ".");
	return last_name;
}

std::string Information::get_nickname_show(void)
{
	if(nickname.length() > 10)
		return (nickname.substr(0, 9) + ".");
	return nickname;
}

void Information::updatecontact(void)
{
	first_name.clear();
	get_input(&first_name, "First Nmae : ");
	last_name.clear();
	get_input(&last_name, "Last Name : ");
	nickname.clear();
	get_input(&nickname, "Nickname : ");
	phone_number.clear();
	get_input(&phone_number, "Phone Number : ");
	darkest_secret.clear();
	get_input(&darkest_secret, "Darkest Secret : " );
}
