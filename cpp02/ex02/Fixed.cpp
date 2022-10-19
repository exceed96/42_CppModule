/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:35:31 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 12:09:00 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw) : _raw(raw << bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float raw) : _raw(roundf(raw * (1 << bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &fixed)
		_raw = fixed.getRawBits();

	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _raw;
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)(_raw) / (1 << bits));
}

int Fixed::toInt(void) const
{
	return (_raw >> bits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	return (o << fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (_raw > fixed._raw);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (_raw < fixed._raw);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (_raw >= fixed._raw);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (_raw <= fixed._raw);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (_raw == fixed._raw);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (_raw != fixed._raw);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++_raw;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	--_raw;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++_raw;

	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--_raw;

	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a <= b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a >= b ? a : b);
}
