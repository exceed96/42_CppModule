/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:38:35 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 12:15:01 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point(void);
		const Fixed get_x(void) const;
		const Fixed get_y(void) const;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);
std::ostream &operator<<(std::ostream &o, const Point &point);
#endif
