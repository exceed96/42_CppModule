/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:18:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/23 11:20:19 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

template <typename T> //템플릿 변수 선언

int easyfind(T searchable, int value)
{
	typename T::iterator it = find(searchable.begin(), searchable.end(), value);
	if (it == searchable.end())
	{
		throw std::exception();
	}
	return *it;
}

int easyfind(std::stack<int> searchable, int value) //stack으로 매개변수가 들어왔을때 찾기
{
	std::vector<int> v;
	std::stack<int> copy(searchable);
	while(!copy.empty())
	{
		v.push_back(copy.top());
		copy.pop();
	}
	return easyfind(v, value);
}

int easyfind(std::queue<int> searchable, int value) //queue로 매개변수가 들어왔을때 찾기
{
	std::vector<int> v;
	std::queue<int> copy(searchable);
	while(!copy.empty())
	{
		v.push_back(copy.front());
		copy.pop();
	}
	return easyfind(v, value);
}

int easyfind(std::priority_queue<int> searchable, int value) //priority_queue(우선순위 큐)로 매개변수가 들어왔을때 찾기
{
	std::vector<int> v;
	std::priority_queue<int> copy(searchable);
	while(!copy.empty())
	{
		v.push_back(copy.top());
		copy.pop();
	}
	return easyfind(v, value);
}

#endif
