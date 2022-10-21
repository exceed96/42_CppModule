/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:45:45 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 12:47:35 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main(void)
{
	Data d;
	d.age = 27;
	d.name = "sangyeki";

	uintptr_t ptr;

	std::cout << "Data: " << &d << std::endl;
	std::cout << "name: " << d.name << std::endl;
	std::cout << "age: " << d.age << std::endl;

	ptr = serialize(&d);
	Data *d2 = deserialize(ptr);

	std::cout << "Data2: " << d2 << std::endl;
	std::cout << "name: " << d2->name << std::endl;
	std::cout << "age: " << d2->age << std::endl;

	return (0);
}
