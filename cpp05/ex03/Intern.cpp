/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:27:37 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:21:29 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form *(Intern::*FormArr)(std::string);

Intern::Intern(void)
{
	std::cout << "Intern was constructed" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	std::cout << "Intern CoPy was constructed" << std::endl;
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern)
{
	std::cout << "Intern replace was constructed" << std::endl;
	(void) intern;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern was deconstructed" << std::endl;
}


int	search_index(std::string target, std::string arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == target)
			return (i);
	}
	return (-1);
}
Form	*Intern::makeForm(std::string FormName, std::string FormTarget)
{
	FormArr Ar[3] = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentForm};
	std::string name_arr[3] = {"Shrubbery", "Robotomy", "President"};
	int index = search_index(FormName, name_arr, 3);
	if(index != -1)
	{
		std::cout << "Intern creats Form : <" << FormName << ">" << std::endl;
		return (this->*Ar[index])(FormTarget);
	}
	std::cout << "FormName <" << FormName << "> is wrong" << std::endl;
	return (0);
}

Form	*Intern::makeShrubberyForm(std::string FormTarget)
{
	return new ShrubberyCreationForm(FormTarget);
}

Form	*Intern::makeRobotomyForm(std::string FormTarget)
{
	return new RobotomyRequestForm(FormTarget);
}

Form	*Intern::makePresidentForm(std::string FormTarget)
{
	return new PresidentialPardonForm(FormTarget);
}
