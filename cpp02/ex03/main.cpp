/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:52:07 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 12:47:08 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point a(1, 1);
	Point b(5, 1);
	Point c(3, 5);
	Point in(2, 2);
	Point out(-2, -2);

	std::cout << "Point \"in\" created at x = " << in.get_x() << ", y = " << in.get_y() << std::endl;
	std::cout << "Point \"out\" created at x =  " << out.get_x() << ", y = " << out.get_y() << std::endl;
	if(bsp(a,b,c,in))
		std::cout << "\"in\" is in the triangle" << std::endl;
	else
		std::cout << "\"in\" is out of the triangle" << std::endl;
	if(bsp(a,b,c,out))
		std::cout << "\"out\" is in the triangle" << std::endl;
	else
		std::cout << "\"out\" is out of the triangle" << std::endl;
	return (0);
}
