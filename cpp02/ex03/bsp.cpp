/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:51:19 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/19 12:49:55 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed outer(const Point x, const Point y, const Point z)
{
	Fixed temp_1 = (x.get_x() - y.get_x()) * (z.get_y() - y.get_y());
	Fixed temp_2 = (x.get_y() - y.get_y()) * (z.get_x() - y.get_x());
	return (temp_1 - temp_2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed x = outer(a, c, point);
	Fixed y = outer(b, a, point);
	Fixed z = outer(c, b, point);
	
	//std::cout << x << " " <<  y << " " << z << "\n";
	if ((x < Fixed(0)) != (y < Fixed(0)) && x != Fixed(0) && y != Fixed(0))
		return false;
	return (z == Fixed(0) || (z < Fixed(0)) == (x + y <= Fixed(0)));
}
