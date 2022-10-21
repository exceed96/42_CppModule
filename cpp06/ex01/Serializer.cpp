/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:46:00 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 12:46:02 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr); //"reinterpret_cast"를 이용해서 전혀 상관이 없는 두 자료형을 변환시킨다.(bit단위로 변환)
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
