/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:04:30 by sangyeki          #+#    #+#             */
/*   Updated: 2022/07/30 19:25:33 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **ag)
{
	if(ac != 4)
	{
		std::cerr << "You need to ./sed [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	
	std::string str1 = ag[2];
	std::string str2 = ag[3];
	std::string file = ag[1];
	std::ifstream fin;
	fin.open(file, std::ios::in);
	if(!fin)
	{
		std::cerr << "Error : unable open [" << file << "]" << std::endl;
		return (1);
	}
	
	std::string outfile = file + ".replace";
	std::ofstream fout;
	fout.open(outfile, std::ios::out | std::ios::trunc);
	if(!fout)
	{
		std::cerr << "Error : unable open [" << outfile << "]" << std::endl;
		return (1);
	}
	
	std::string save_str = "";
	std::string buffer_str = "";
	while(!fin.eof())
	{
		getline(fin,buffer_str);
		save_str += buffer_str;
		if(!fin.eof())
			save_str += '\n';
	}
	fin.close();
	size_t index = save_str.find(str1);
	while(index != std::string::npos)
	{
		save_str.erase(index, str1.length());
		save_str.insert(index, str2);
		index = save_str.find(str1, index + str2.length());
	}
	fout << save_str;
	fout.close();
	
	return (0);
}
