/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:50:34 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 16:17:19 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap apple = ClapTrap("apple");
	ClapTrap banana = ClapTrap("banana"); 
	ClapTrap cherry = apple;
	cherry.set_name("cherry");

	apple.attack(banana.get_name());
	banana.attack(cherry.get_name());
	apple.takeDamage(10);
	apple.takeDamage(10);
	apple.beRepaired(7);
	apple.takeDamage(10);
	return (0);
}
