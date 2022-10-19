/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:17:26 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 17:13:01 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap apple = FragTrap("apple");
	FragTrap banana = FragTrap("banana");
	FragTrap cherry = apple;
	cherry.set_name("cherry");

	apple.attack(banana.get_name());
	banana.attack(cherry.get_name());
	apple.takeDamage(10);
	apple.takeDamage(10);
	apple.beRepaired(7);
	apple.takeDamage(10);
	cherry.highFivesGuys();
	return (0);
}
