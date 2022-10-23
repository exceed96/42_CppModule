/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:20:31 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/23 11:20:37 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int N; //벡터의 사이즈
		std::vector<int> v; //벡터 "v" 선언
	public:
		Span(void); //기본 생성자
		Span(unsigned int N); //N값이 들어오는 벡터
		Span(const Span &span); //복사 생성자
		~Span(); // 소멸자
		Span &operator=(const Span &span); //대입 생성자

		void addNumber(int n);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
