/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:05:13 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/05 18:23:42 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap()
{
	std::cout << "FragTrap was constructed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "FragTrap <" << _name << "> was constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scavtrap)
{
	*this = scavtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &scavtrap)
{
	std::cout << "FragTrap <" << scavtrap._name << "> was copied" << std::endl;
	if(this != &scavtrap)
	{
		_name = scavtrap._name;
		_hp = scavtrap._hp;
		_ep = scavtrap._ep;
		_ad = scavtrap._ad;
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap <" << _name << "> was deconstructed" << std::endl;
}

void FragTrap::set_name(std::string name)
{
	std::cout << "FragTrap <" << _name << "> is now FragTrap <" << _name << ">" << std::endl;
	_name = name;
}

void FragTrap::attack(const std::string &target)
{
	if (_ep)
	{
		--_ep;
		std::cout << "FragTrap <" << _name << "> attacks <" << target << ">, causing " << _ad << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap <" << _name << "> has 0 ep" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if(!_hp)
		std::cout << "FragTrap <" << _name << "> already dead" << std::endl;
	else
	{
		_hp -= amount;
		if(_hp < 0)
			_hp = 0;
		std::cout << "FragTrap <" << _name << "> attacked " << amount << " hp" << std::endl;
		std::cout << "FragTrap <" << _name << "> have " << _hp << "hp" << std::endl;
		if(!_hp)
			std::cout << "FragTrap <" << _name << "> died" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if(_ep)
	{
		--_ep;
		std::cout << "FragTrap <" << _name << "> healed " << amount << " hp" << std::endl;
		std::cout << "FragTrap <" << _name << "> have " << _hp << "hp" << std::endl;
	}
	else
		std::cout << "FragTrap <" << _name << " has 0 ep" << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap <" << _name << "> highFive" << std::endl;
}
