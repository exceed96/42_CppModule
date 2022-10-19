/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:00:31 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 18:17:04 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("DEBUG");
	std::cout << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	karen.complain("ERROR");

	return (0);
}
