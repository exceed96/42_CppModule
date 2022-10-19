/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:46:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/02 14:19:28 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

void Karen::complain(std::string level) const
{
	speech_level stage[4] = {
		{"DEBUG", &Karen::debug},
		{"INFO", &Karen::info},
		{"WARNING", &Karen::warning},
		{"ERROR", &Karen::error}
	};

	for(int i = 0; i < 4; i++)
	{
		if(level == stage[i].key)
		{
			void (Karen::*f)(void) const = stage[i].f;
			(this->*f)();
			break;
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
