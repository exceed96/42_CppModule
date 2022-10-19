/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:01:26 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:02:56 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_c(name), weapon_c(NULL) {}

void HumanB::setWeapon(const Weapon &weapon)
{
	weapon_c = &weapon;
}

void HumanB::attack(void) const
{
	if (weapon_c)
		std::cout << name_c << " attacks with their " << weapon_c->getType() << std::endl;
	else
		std::cout << name_c << "don't have weapon" << std::endl;
}
