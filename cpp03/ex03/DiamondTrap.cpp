/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:24:01 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 19:42:39 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	std::cout << "DiamondTrap was constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	std::cout << "DiamondTrap <" << _name << "> was constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	*this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &scavtrap)
{
	std::cout << "DiamondTrap <" << scavtrap._name << "> was copied" << std::endl;
	if(this != &scavtrap)
	{
		_name = scavtrap._name;
		_hp = scavtrap._hp;
		_ep = scavtrap._ep;
		_ad = scavtrap._ad;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap <" << _name << "> was deconstructed" << std::endl;
}

void DiamondTrap::set_name(std::string name)
{
	std::cout << "DiamondTrap <" << _name << "> is now DiamondTrap <" << _name << ">" << std::endl;
	_name = name;
}

void DiamondTrap::attack(const std::string &target)
{
	if (_ep)
	{
		--_ep;
		std::cout << "DiamondTrap <" << _name << "> attacks <" << target << ">, causing " << _ad << " points of damage!" << std::endl;
	}
	else
		std::cout << "DiamondTrap <" << _name << "> has 0 ep" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if(!_hp)
		std::cout << "DiamondTrap <" << _name << "> already dead" << std::endl;
	else
	{
		_hp -= amount;
		if(_hp < 0)
			_hp = 0;
		std::cout << "DiamondTrap <" << _name << "> attacked " << amount << " hp" << std::endl;
		std::cout << "DiamondTrap <" << _name << "> have " << _hp << "hp" << std::endl;
		if(!_hp)
			std::cout << "DiamondTrap <" << _name << "> died" << std::endl;
	}
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	_hp += amount;
	if(_ep)
	{
		--_ep;
		std::cout << "DiamondTrap <" << _name << "> healed " << amount << " hp" << std::endl;
		std::cout << "DiamondTrap <" << _name << "> have " << _hp << "hp" << std::endl;
	}
	else
		std::cout << "DiamondTrap <" << _name << " has 0 ep" << std::endl;
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap <" << _name << ">" <<  std::endl;
	std::cout << "ClapTrap <" << this->ClapTrap::get_name() << ">" << std::endl;
}
