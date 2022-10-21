/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:50:51 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 12:50:52 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Search.hpp"

int main(void)
{
	Base *p = generate();
	Base& t = *(generate());

	identify(p);
	identify(t);

	delete p;
	delete &t;

	return (0);
}
