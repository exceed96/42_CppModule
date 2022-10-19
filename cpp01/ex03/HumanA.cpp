/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:51:13 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:01:56 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : name_c(name), weapon_c(weapon) {}

void HumanA::attack(void) const
{
	std::cout << name_c << "attacks with their" << weapon_c.getType() << std::endl;
}
