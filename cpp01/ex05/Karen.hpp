/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:30:24 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/02 14:03:32 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_HPP_
#define _KAREN_HPP_

#include <string>

class Karen
{
	private:
		struct speech_level
		{
			std::string key;
			void (Karen::*f)(void) const;
		};
	public:
		void complain(std::string level) const;
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
};

#endif
