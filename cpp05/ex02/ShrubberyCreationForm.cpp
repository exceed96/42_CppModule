/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:20:57 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:21:12 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm was constructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : Form(scf)
{
	std::cout << "ShrubberyCreationForm CoPy was constructed" << std::endl;
	*this = scf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
	std::cout << "ShrubberyCreationFrom replace was constructed" << std::endl;
	this->_target = scf._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm was deconstructed" << std::endl;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat)
{
	Form::beSigned(bureaucrat);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::ofstream shrubberyFile(this->_target + "_shrubbery");
	shrubberyFile << "			          # #### ####\n\
                                ### \\/#|### |/####\n\
                               ##\\/#/ \\||/##/_/##/_#\n\
                             ###  \\/###|/ \\/ # ###\n\
                           ##_\\_#\\_\\## | #/###_/_####\n\
                          ## #### # \\ #| /  #### ##/##\n\
                           __#_--###`  |{,###---###-~\n\
				      }}{\n\
                                      }}{\n\
                                      }}{\n\
                                      {{}" << std::endl;
	shrubberyFile.close();
}
