/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:57:48 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:22:29 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name_c;
		const Weapon *weapon_c;
	public:
		HumanB(std::string name);
		void setWeapon(const Weapon &weapon);
		void attack(void) const;
};

#endif
