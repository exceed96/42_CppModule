/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:18:12 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/18 15:35:09 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **ag)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < ac; i++)
		{
			for(int j = 0; ag[i][j]; j++)
				std::cout << static_cast<char>(toupper(ag[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
