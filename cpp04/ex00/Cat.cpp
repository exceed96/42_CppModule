/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:35:37 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:36:35 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal::Animal()
{
	std::cout << "Cat was constructed" << std::endl;
	_name = "Yaong";
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat was copied" << std::endl;
	if(this != &cat)
		_name = cat._name;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat <" << Animal::getType() << "> was destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meooooooooow" << std::endl;
}

const std::string &Cat::getType() const
{
	return Animal::getType();
}
