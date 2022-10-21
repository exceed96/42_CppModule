/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:47 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 17:08:37 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void testIntArr()
{
	int arr[] = {42, 84, 132, 176, 218};
	iter(arr, 5, &print);
}

void testFloatArr()
{
	float arr[] = {12312.3923f, 29384.234f, 12312.9f, 123.923234f};
	iter(arr, 4, &print);
}

void testStringArr()
{
	std::string arr[] = {"H", "E", "L", "L", "O"};
	iter(arr, 5, &print);
}

int main(void)
{

	testIntArr();
	std::cout << "\n";
	testFloatArr();
	std::cout << "\n";
	testStringArr();
	std::cout << "\n";
	return 0;
}
