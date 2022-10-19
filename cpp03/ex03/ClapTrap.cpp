/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:52:07 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/05 15:54:21 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap was constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap <" << _name << "> was constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap <" << claptrap._name << "> was copied" << std::endl;
	if(this != &claptrap)
	{
		_name = claptrap._name;
		_hp = claptrap._hp;
		_ep = claptrap._ep;
		_ad = claptrap._ad;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <" << _name << "> was deconstructed" << std::endl;
}

std::string ClapTrap::get_name(void) const
{
	return _name;
}

void ClapTrap::set_name(std::string name)
{
	std::cout << "ClapTrap <" << _name << "> is now ClapTrap <" << name << ">" << std::endl;
	_name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (_ep)
	{
		--_ep;
		std::cout << "ClapTrap <" << _name << "> attacks <" << target << ">, causing " << _ad << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap <" << _name << "> has 0 ep" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(!_hp)
		std::cout << "ClapTrap <" << _name << "> already dead" << std::endl;
	else
	{
		_hp -= amount;
		if(_hp < 0)
			_hp = 0;
		std::cout << "ClapTrap <" << _name << "> attacked " << amount << " hp" << std::endl;
		std::cout << "ClapTrap <" << _name << "> have " << _hp << "hp" << std::endl;
		if(!_hp)
			std::cout << "ClapTrap <" << _name << "> died" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if(_ep)
	{
		--_ep;
		std::cout << "ClapTrap <" << _name << "> healed " << amount << " hp" << std::endl;
		std::cout << "ClapTrap <" << _name << "> have " << _hp << "hp" << std::endl;
	}
	else
		std::cout << "ClapTrap <" << _name << " has 0 ep" << std::endl;
}
