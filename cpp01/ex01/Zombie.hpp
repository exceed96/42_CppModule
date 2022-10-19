/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:29:49 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:30 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>

class Zombie
{
	private:
		std::string name_c;
	public:
		Zombie(void);
		~Zombie(void);
		
		void announce(void) const;
		void initial_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif
