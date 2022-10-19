/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:41:42 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 12:14:57 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point &point)
{
	*this = point;
}

Point &Point::operator=(const Point &point)
{
	if(this != &point)
	{
		const_cast<Fixed&>(_x) = point.get_x();
		const_cast<Fixed&>(_y) = point.get_y();
	}
	return *this;
}

Point::~Point(void) {}

const Fixed Point::get_x(void) const
{
	return _x;
}

const Fixed Point::get_y(void) const
{
	return _y;
}
