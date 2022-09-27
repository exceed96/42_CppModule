/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:04:15 by sangyeki          #+#    #+#             */
/*   Updated: 2022/07/28 13:21:51 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_
#include "phonebook_info.hpp"

class phonebook
{
	public:
		phonebook(void);
		void AddPhonebook(void);
		void SearchPhonebook(void);
	private:
		int size;
		Information informations[8];	
};

#endif
