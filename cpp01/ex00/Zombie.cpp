/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:38:23 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:41:13 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name_c(name) {}

Zombie::~Zombie(void)
{
	std::cout << name_c << " died..." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << name_c << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
