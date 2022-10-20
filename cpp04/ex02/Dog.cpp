/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:39:15 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:39:17 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog was constructed" << std::endl;
	_name = "Mung";
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog was copied" << std::endl;
	if(this != &dog)
		_name = dog._name;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog <" << Animal::getType() << "> was destructed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wooooof" << std::endl;
}

const std::string &Dog::getType() const
{
	return Animal::getType();
}
