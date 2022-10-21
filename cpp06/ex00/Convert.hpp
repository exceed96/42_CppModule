/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:58:31 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 14:20:35 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_HPP_
# define _CONVERT_HPP_

# include <string>
# include <iostream>
# include <limits>
# include <climits>
# include <cstdlib>
# include <cstring>
# include <cctype>

# define NAN_INF 1
# define ERROR 2
# define CHAR 3
# define INT 4
# define FLOAT 5
# define DOUBLE 6

class Convert
{
	private:
		const std::string _input;
		int	_type;
		char	_char;
		int		_int;
		float	_float;
		double	_double;

		Convert();
		int checkInput(void);
		void convertInput(void);
		void fromChar(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);
		void printOutput(void) const;

		std::string getInput(void) const;
		int getType(void) const;
		char getChar(void) const;
		int getInt(void) const;
		float getFloat(void) const;
		double getDouble(void) const;
	public:
		Convert(const std::string input);
		Convert(const Convert &convert);
		Convert &operator=(const Convert &convert);
		~Convert();
	
	class ErrorException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif
