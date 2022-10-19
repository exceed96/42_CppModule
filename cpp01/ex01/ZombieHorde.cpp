/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:43:46 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:51:51 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];

	for(int i = 0; i < N; i++)
		zombies[i].initial_name(name + " [" + std::to_string(i) + "]");

	return zombies;
}
