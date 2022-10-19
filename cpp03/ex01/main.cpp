/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:39:40 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 16:17:23 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap apple = ScavTrap("apple");
	ScavTrap banana = ScavTrap("banana");
	ScavTrap cherry = apple;
	cherry.set_name("cherry");

	apple.attack(banana.get_name());
	banana.attack(cherry.get_name());
	apple.takeDamage(10);
	apple.takeDamage(10);
	apple.beRepaired(7);
	apple.takeDamage(10);
	cherry.guardGate();
	return (0);
}
