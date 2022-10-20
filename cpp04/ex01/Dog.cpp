/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:50 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:37:52 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain)
{
	std::cout << "Dog was constructed" << std::endl;
	_name = "Mung";
}

Dog::Dog(const Dog &dog) : Animal(dog) 
{
	*this = dog;
	_name = dog._name;
	_brain = new Brain(*dog._brain);
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog was copied" << std::endl;
	if(this != &dog)
	{
		_name = dog._name;
		*this->_brain = *dog._brain;
	}
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog <" << Animal::getType() << "> was destructed" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "wooooof" << std::endl;
}

const std::string &Dog::getType() const
{
	return Animal::getType();
}
const Brain &Dog::get_brain() const
{
	return *_brain;
}
