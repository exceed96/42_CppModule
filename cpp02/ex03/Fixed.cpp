/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:35:31 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/04 16:44:10 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0) {}

Fixed::Fixed(const int raw) : _raw(raw << bits) {}

Fixed::Fixed(const float raw) : _raw(roundf(raw * (1 << bits))) {}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if(this != &fixed)
		_raw = fixed.getRawBits();

	return *this;
}

Fixed::~Fixed(void) {}

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
