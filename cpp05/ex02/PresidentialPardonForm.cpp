/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:18:35 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:18:37 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm was constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : Form(ppf)
{
	std::cout << "PresidentialPardonForm CoPy was constructed" << std::endl;
	*this = ppf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & ppf)
{
	std::cout << "Presidential replace was constructed" << std::endl;
	this->_target = ppf._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm was deconstructed" << std::endl;
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat)
{
	Form::beSigned(bureaucrat);
}

void PresidentialPardonForm::excute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "<" << this->_target << "> has been pardoned by Zaphod Beeblebrox." << std::endl;
}
