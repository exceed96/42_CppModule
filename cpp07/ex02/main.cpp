/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:58:50 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 17:10:59 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Array.hpp"

int main()
{
	std::cout << "< Creat a type int array 10 elements > " << std::endl;
	Array <int> arrI(10);

	std::cout << "< Filling the array using [] operator >" << std::endl;
	for(unsigned int i = 0; i < arrI.size(); i++)
		arrI[i] = i + 1;
	std::cout << arrI << std::endl;

	std::cout << "< Creat a type string array 5 elements > " << std::endl;
	Array <std::string> arrS(5);

	std::cout << "< Filling the array using [] operator >" << std::endl;
	for(unsigned int i = 0; i < arrS.size(); i++)
		arrS[i] = std::to_string(i);

	std::cout << arrS << std::endl;

	Array <std::string> arrS_C = arrS; //궁금해서 복사생성자들에 대해서도 테스트 해봤다.
	Array <std::string> arrS_C2(arrS);

	arrS_C[0] = "change";
	arrS_C2[0] = "change2";
	std::cout << arrS << std::endl;
	std::cout << arrS_C << std::endl;
	std::cout << arrS_C2 << std::endl;
}
