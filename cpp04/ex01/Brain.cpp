/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:23 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:37:25 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain was constructed" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for(int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain was copied" << std::endl;
	if(this != &brain)
	{
		for(int i = 0; i < 100; i++)
			_ideas[i] = brain._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain was destructed" << std::endl;
}
