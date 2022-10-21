/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:55:51 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 15:09:28 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_

template <typename T> //템플릿변수 선언
void swap(T &v1, T &v2) //참조로 값 받아오기
{
	T temp = v1;
	v1 = v2;
	v2 = temp;
}

template <typename T>

const T &min(const T &v1, const T &v2)
{
	return v1 < v2 ? v1 : v2;
}

template <typename T>

const T &max(const T &v1,const T &v2)
{
	return v1 > v2 ? v1 : v2;
}

#endif
