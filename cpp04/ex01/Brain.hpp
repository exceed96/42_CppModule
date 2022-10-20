/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:37:20 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <string>

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain(void);
};
#endif
