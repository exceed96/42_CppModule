/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_info.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:20:45 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 14:59:48 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_INFO_HPP_
#define _PHONEBOOK_INFO_HPP_

#include <string>

class Information
{
	public:
		Information(void);
		void updatecontact(void);
		std::string get_first_name(void);
		std::string get_first_name_show(void);
		std::string get_last_name(void);
		std::string get_last_name_show(void);
		std::string get_nickname(void);
		std::string get_nickname_show(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif
