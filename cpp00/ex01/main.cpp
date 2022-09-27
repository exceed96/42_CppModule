/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:52:45 by sangyeki          #+#    #+#             */
/*   Updated: 2022/07/27 19:38:38 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	std::string	cmd;
	phonebook Phonebook;

	while(1)
	{
		std::cout << "Choose cmd : <  ADD, SEARCH, EXIT  >" << std::endl;
		std::getline(std::cin, cmd);

		if(std::cin.eof() || cmd == "EXIT")
			break;
		if(cmd.empty() || (cmd != "ADD" && cmd != "SEARCH"))
		{
			std::cout << "Empty or Wrong cmd" << std::endl;
			continue;
		}
		if(cmd == "ADD")
			Phonebook.AddPhonebook();
		else if(cmd == "SEARCH")
			Phonebook.SearchPhonebook();
	}
	return (0);
}
