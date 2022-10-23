/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:20:41 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/23 11:20:48 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) //디폴트 생성자
{
	std::cout << "Span was constructed" << std::endl;
}

Span::Span(unsigned int N) : N(N) //N값이 주어지는 생성자
{
	std::cout << "Span was constructed with N" << std::endl;
}

Span::Span(const Span &span) //복사 생성자
{
	std::cout << "Span CoPy was constructed" << std::endl;
	*this = span;
}

Span &Span::operator=(const Span &span) // 대입 생성자
{
	std::cout << "Span replace was constructed" << std::endl;
	this->N = span.N;
	this->v = span.v;
	return *this;
}
Span::~Span(void) //소멸자
{
	std::cout << "Span was deconstructed" << std::endl;
}

void Span::addNumber(int n) //벡터에 숫자를 추가해주는 메서드
{
	if(v.size() == N)
		throw std::out_of_range("Error : vector is already full");
	v.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) //벡터 중간에 값을 넣어주는 메서드
{
	if(v.size() == N || std::distance(begin, end) > (long)N - (long)v.size())
		throw std::out_of_range("Error : vector is already full");
	v.insert(v.end(), begin, end);
}

int Span::shortestSpan(void) //벡터의 임의의 두 원소 값이 최소값을 알아내는 메서드
{
	int n;
	if(v.empty() || v.size() == 1)
		throw std::exception();
	std::sort(v.begin(), v.end());
	n = v[1] - v[0];
	for(unsigned int i = 0; i < v.size() - 1; i++)
	{
		if((v[i + 1] - v[i]) < n)
			n = (v[i + 1] - v[i]);
	}
	return n;
}

int Span::longestSpan(void) ////벡터의 임의의 두 원소 값이 최대값을 알아내는 메서드
{
	int n;
	if(v.empty() || v.size() == 1)
		throw std::exception();
	std::sort(v.begin(), v.end());
	n = v[v.size() - 1] - v[0];
	return n;
}
