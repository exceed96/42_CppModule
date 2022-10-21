/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:59:23 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 17:10:35 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>

template <typename T>

class Array
{
	private:
		unsigned int _n; //매개변수로 unsigned int 를 받으라고 해서 멤버변수도 unsigned int로 선언
		T			*_arr; //배열이 될 변수
	public:
		Array(void) : _n(0)
		{
			_arr = new T[0];
		}
		Array(unsigned int n) : _n(n)
		{
			_arr = new T[n]; //n은 배열의 사이즈라서 사이즈만 큼 동적할당
		}
		Array(const Array &array)
		{
			*this = array;
		}
		Array &operator=(const Array &array)
		{
			_n = array._n;
			_arr = new T[_n];
			for(unsigned int i = 0; i < _n; i++)
				_arr[i] = array._arr[i];
			return *this;
		}
		~Array()
		{
			delete [] _arr;
		}
		T &operator[](unsigned int n)
		{
			if (n < 0 || n >= _n) //배열의 사이즈가 범위를 벗어날시 exception클래스로 던져준다.
				throw std::exception();
			return _arr[n];
		}
		unsigned int size(void) const //배열의 사이즈를 리턴해주는 함수
		{
			return (_n);
		}

};

template <typename T>

std::ostream &operator<<(std::ostream &o, Array<T> &arr) //"<<"연산자 오버로딩
{
	o << "Arr size : " << arr.size() << std::endl;
	o << "<";
	for(unsigned int i = 0; i < arr.size(); i++)
	{
		o << arr[i];
		if(i < arr.size() - 1)
			o << ", ";
	}
	o << ">" << std::endl;
	return o;
}

#endif
