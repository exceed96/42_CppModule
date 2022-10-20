/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:27:21 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:17:52 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include <string>
#include "Form.hpp"

class Intern
{
	private:
		Form	*makeShrubberyForm(std::string TargetForm);
		Form	*makeRobotomyForm(std::string TargetForm);
		Form	*makePresidentForm(std::string TargetForm);
	public:
		Intern(void);
		Intern(const Intern &intern);
		Intern &operator=(const Intern &intern);
		~Intern(void);
		Form	*makeForm(std::string FormName, std::string FormTarget);
};

#endif
