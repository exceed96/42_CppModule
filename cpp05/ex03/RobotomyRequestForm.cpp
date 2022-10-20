/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:26:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:26:31 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm was constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : Form(rrf)
{
	std::cout << "RobotomyRequestForm CoPy was constructed" << std::endl;
	*this = rrf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf)
{
	std::cout << "RobotomyRequestForm replace was constructed" << std::endl;
	this->_target = rrf._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm was deconstructed" << std::endl;
}

void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat)
{
	Form::beSigned(bureaucrat);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	std::srand(std::time(NULL));
	Form::execute(executor);
	std::cout << "---- Make some Noise ----" << std::endl;
	if(std::rand() % 2) 
	{
	std::cout << "<" << this->_target << "> has been robotomized successfully 50% of the time," << std::endl;
	}
	else
		std::cout << "<" << this->_target << "> has been failed to robotomized" << std::endl;
}
