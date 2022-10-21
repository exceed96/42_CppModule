/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:49:20 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 13:02:21 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "Search.hpp"

long  random(void)
{
	srand(time(NULL));
	return (rand() % 3);
}

Base *generate(void)
{
	int i = random();
	switch(i)
	{
		case 0:
			std::cout << "< Creat type A >" << std::endl;
			return new A();
		case 1:
			std::cout << "< Creat type B >" << std::endl;
			return new B();
		case 2:
			std::cout << "< Creat type C >" << std::endl;
			return new C();
		default:
			std::cout << "< Creat type A >" << std::endl;
			return new A();
	}
}

void identify(Base &p)
{
	std::cout << "Derived Class using Reference: " << std::endl;
	try
	{
		if(&dynamic_cast<A&>(p))
			std::cout << "Derived class A" << std::endl;
	}catch(std::exception& e) {}
	try
	{
		if(&dynamic_cast<B&>(p))
			std::cout << "Derived calss B" << std::endl;
	}catch(std::exception& e) {}
	try
	{
		if(&dynamic_cast<C&>(p))
			std::cout << "Derived class C" << std::endl;
	}catch(std::exception& e) {}
}

void identify(Base *p)
{
	std::cout << "Derived Class using Pointer: " << std::endl;
	A* ptrA = dynamic_cast<A*>(p);
	if(ptrA != NULL)
	{
		std::cout << "Derived class A" << std::endl;
		return ;
	}
	B* ptrB = dynamic_cast<B*>(p);
	if(ptrB != NULL)
	{
		std::cout << "Derived class B" << std::endl;
		return ;
	}
	C* ptrC = dynamic_cast<C*>(p);
	if(ptrC != NULL)
	{
		std::cout << "Derived class C" << std::endl;
		return ;
	}
}
