/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:34 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 17:07:12 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

template <typename T>

void iter(T *array, int length, void (*f)(const T &val))
{
	for (int i = 0; i < length; i++)
			f(array[i]);
}

template <typename T>

void print(const T &val)
{
	std::cout << val << " ";
}

#endif
