/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:20:55 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/23 11:22:13 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span v(10);
	try
	{
		v.addNumber(6);
		v.addNumber(3);
		v.addNumber(17);
		v.addNumber(9);
		v.addNumber(11);
	}
	catch(std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << v.shortestSpan() << std::endl;
		std::cout << v.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Error : vector is not enough" << std::endl;
	}

	Span v_big(10000);

	for(int i = 0; i < 10000; i++)
		v_big.addNumber(i);

	std::cout << v_big.shortestSpan() << std::endl;
	std::cout << v_big.longestSpan() << std::endl;
}
