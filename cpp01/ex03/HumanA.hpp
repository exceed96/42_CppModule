/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:29:32 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:22:33 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name_c;
		const Weapon &weapon_c;
	public:
		HumanA(std::string name, const Weapon &weapon);
		void attack(void) const;
};

#endif
