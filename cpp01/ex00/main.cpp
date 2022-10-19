/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:42:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:43:49 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *heap = newZombie("heap call");
	heap->announce();
	delete heap;

	Zombie stack = Zombie("Stack call");
	stack.announce();

	randomChump("Random");
	return (0);
}
