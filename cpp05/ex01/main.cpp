/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:12:29 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:23:59 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "----- Test Bureaucrat grade -----" << std::endl;
	Form p1("Form1", 24, 70);
	Form p2("Form2", 10 , 2);
	Form p3 = p2;
	Form p4 = p1;
	Bureaucrat b1("apple", 21);
	Bureaucrat b2("banana", 11);
	Bureaucrat b3("mango", 80);

	std::cout << p1 << std::endl;
	std::cout << b1 << std::endl;

	b1.signForm(p1);
	std::cout << p2 << std::endl;
	std::cout << b2 << std::endl;
	b2.signForm(p2);

	std::cout << std::endl;
	std::cout << "----- Test Exception grade -----" << std::endl;
	b2.signForm(p4);

	try
	{
		Form f1("FormF", 160, 170);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form f2("FromF2", 0, -1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
