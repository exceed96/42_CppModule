/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:33:05 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:22:27 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm shrubbery("A");
	RobotomyRequestForm robotomy("B");
	PresidentialPardonForm pardon("C");
	Bureaucrat apple("Apple", 150);
	Bureaucrat banana("Banana", 120);
	Bureaucrat melon("Melon", 3);

	{
		try
		{
			std::cout << apple << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			apple.executeForm(shrubbery);
			apple.executeForm(robotomy);
			apple.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			std::cout << apple << std::endl;
			std::cout << banana << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			shrubbery.beSigned(banana);
			apple.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			robotomy.beSigned(melon);
			pardon.beSigned(melon);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;

			std::cout << "\n --------------------- \n\n";
			melon.executeForm(shrubbery);
			std::cout << "\n --------------------- \n\n";
			melon.executeForm(robotomy);
			std::cout << "\n --------------------- \n\n";
			melon.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";


	return (0);
}
