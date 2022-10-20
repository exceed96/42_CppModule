/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:11 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:37:13 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _name("")
{
	std::cout << "Animal was constructed" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
}

Animal::~Animal(void)
{
	std::cout << "Animal <" << Animal::getType() << "> was destructed" << std::endl;
}
Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal was copied" << std::endl;
	if(this != &animal)
	{
		_name = animal._name;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "no sound..." << std::endl;
}

const std::string& Animal::getType() const
{
	return _name;
}
