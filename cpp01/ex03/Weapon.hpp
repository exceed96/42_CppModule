/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:44:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:22:22 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>

class Weapon
{
	private:
		std::string type_c;
	public:
		Weapon(std::string type_c);
		std::string getType(void) const;
		void setType(std::string type);
};

#endif
