/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:34:30 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/02 15:30:39 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_HPP_
#define _KAREN_HPP_

#include <string>

class Karen
{
	private:
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
	public:
		void complain(std::string level) const;
};

#endif
