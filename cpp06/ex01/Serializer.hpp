/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:45:13 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 12:45:57 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
#define _SERIALIZER_HPP_

#include "Data.hpp"

uintptr_t serialize(Data* ptr); //포인터의 주소를 저장하는데 사용하는 "uintptr_t"
Data*	  deserialize(uintptr_t raw);

#endif
