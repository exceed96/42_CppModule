/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:38:28 by sangyeki          #+#    #+#             */
/*   Updated: 2022/07/30 14:50:47 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	int C = 5;

	Zombie* zombies = zombieHorde(C, "Heap");
	for(int i = 0; i < C; i++)
		zombies[i].announce();

	delete[] zombies;

	return (0);
}
