/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:42:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/08/02 15:25:53 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

int main(int ac, char **ag)
{
	if (ac != 2)
	{
		std::cerr << "You need to ./karenFilter <level>" << std::endl;
		return (1);
	}
	Karen().complain(ag[1]);

	return (0);
}
