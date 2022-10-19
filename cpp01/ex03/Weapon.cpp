/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:47:15 by sangyeki          #+#    #+#             */
/*   Updated: 2022/07/30 16:50:03 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_c(type) {}

void Weapon::setType(std::string type)
{
	type_c = type;
}

std::string Weapon::getType(void) const
{
	return type_c;
}
