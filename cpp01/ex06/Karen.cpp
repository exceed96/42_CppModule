/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:36:44 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:16:40 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

void Karen::complain(std::string level) const
{
	int i = 0;
	const std::string stages[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	for(; i < 4; i++)
	{
		if(level == stages[i])
			break;
	}
	switch (i)
	{
		case 0 :{
			debug();
			std::cout << std::endl;
		}
		case 1 :{
			info();
			std::cout << std::endl;
		}
		case 2 :{
			warning();
			std::cout << std::endl;
		}
		case 3 :{
			error();
			break;
		}
		default :{
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			std::cout << level << std::endl;
		}
	}
}


void Karen::debug(void) const
{
	std::cout << "DEBUG : ";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) const
{
	std::cout << "INFO : ";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) const
{
	std::cout << "WARNING : ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) const
{
	std::cout << "ERROR : ";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

