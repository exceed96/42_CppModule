/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:37:35 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 11:37:37 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat was constructed" << std::endl;
	_name = "Yaong";
	_brain = new Brain();
}

Cat::Cat(const Cat &cat){
	_brain = new Brain();
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat was copied" << std::endl;
	if(this != &cat)
	{
		_name = cat._name;
		*this->_brain = *cat._brain;
	}
	return *this;
}

Cat::~Cat(void)
{
	delete this->_brain;
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
const Brain &Cat::get_brain() const
{
	return *_brain;
}
