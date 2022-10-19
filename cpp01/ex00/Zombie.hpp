/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:33:03 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 17:38:24 by sangyeki         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);

		void announce(void) const;
};

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

#endif
