/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:27 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:37 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : name_c("") {} 

Zombie::~Zombie(void)
{
	std::cout << name_c << " : died..." << std::endl;
}

void Zombie::initial_name(std::string name)
{
	name_c = name;
}

void Zombie::announce(void) const
{
	std::cout << name_c << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
