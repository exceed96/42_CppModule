/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:18:18 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/05 17:17:29 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap()
{
	std::cout << "ScavTrap was constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap <" << _name << "> was constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap <" << scavtrap._name << "> was copied" << std::endl;
	if(this != &scavtrap)
	{
		_name = scavtrap._name;
		_hp = scavtrap._hp;
		_ep = scavtrap._ep;
		_ad = scavtrap._ad;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{ 
	std::cout << "ScavTrap <" << _name << "> was deconstructed" << std::endl;
}

void ScavTrap::set_name(std::string name)
{
	std::cout << "ScavTrap <" << _name << "> is now ScavTrap <" << _name << ">" << std::endl;
	_name = name;
}

void ScavTrap::attack(const std::string &target)
{
	if (_ep)
	{
		--_ep;
		std::cout << "ScavTrap <" << _name << "> attacks <" << target << ">, causing " << _ad << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap <" << _name << "> has 0 ep" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(!_hp)
		std::cout << "ScavTrap <" << _name << "> already dead" << std::endl;
	else
	{
		_hp -= amount;
		if(_hp < 0)
			_hp = 0;
		std::cout << "ScavTrap <" << _name << "> attacked " << amount << " hp" << std::endl;
		std::cout << "ScavTrap <" << _name << "> have " << _hp << "hp" << std::endl;
		if(!_hp)
			std::cout << "ScavTrap <" << _name << "> died" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if(_ep)
	{
		--_ep;
		std::cout << "ScavTrap <" << _name << "> healed " << amount << " hp" << std::endl;
		std::cout << "ScavTrap <" << _name << "> have " << _hp << "hp" << std::endl;
	}
	else
		std::cout << "ScavTrap <" << _name << " has 0 ep" << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap <" << _name << " is GateKeeper Mode" << std::endl;
}
