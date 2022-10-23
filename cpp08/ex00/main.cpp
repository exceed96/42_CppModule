/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:18:24 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/23 11:20:01 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	try
	{
		int result = easyfind(v, 20);
		std::cout << "Find : " << result << std::endl;
	}
	catch(std::exception &e) //찾지 못할때는 exception클래스 예외 던지기
	{
		std::cerr << "Value not found" << std::endl;
	}

	std::priority_queue<int> pq;
	pq.push(40);
	pq.push(50);
	pq.push(60);

	try
	{
		int result = easyfind(pq, 70);
		std::cout << "Find : " << result << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Value not found" << std::endl;
	}
	return (0);
}
