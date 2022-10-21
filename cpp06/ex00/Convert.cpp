/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:04:14 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/21 14:27:13 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Convert Default constructor called" << std::endl;
}

Convert::Convert(const std::string input) : _input(input)
{
	this->_double = atof(this->getInput().c_str());
	this->convertInput();
	this->printOutput();
}

Convert::Convert(const Convert &convert): _input(convert.getInput())
{
	std::cout << "Convert Copy constructor called" << std::endl;
	*this = convert;
	this->printOutput();
}

Convert &Convert::operator=(const Convert &convert)
{
	std::cout << "Convert Assign operator called" << std::endl;
	if (this == &convert)
			return *this;
	this->_type = convert.getType();
	this->_char = convert.getChar();
	this->_int = convert.getInt();
	this->_float = convert.getFloat();
	this->_double = convert.getDouble();
	return *this;
}

Convert::~Convert()
{}

int Convert::checkInput()
{
	if (this->getInput().compare("nan") == 0 || this->getInput().compare("+inf") == 0 || this->getInput().compare("-inf") == 0 ||
			this->getInput().compare("+inff") == 0 || this->getInput().compare("-inff") == 0)
		return (NAN_INF);
	else if (this->getInput().length() == 1 && (this->getInput()[0] == '+' || this->getInput()[0] == '-' || this->getInput()[0] == 'f' || this->getInput()[0] == '.'))
		return (CHAR);
	else if (this->getInput().find_first_of("+-") != this->getInput().find_last_of("+-"))
		return (ERROR);
	else if (this->getInput().find_first_not_of("+-0123456789.") == std::string::npos)
		return (INT);
	else if (this->getInput().find_first_not_of("+-0123456789.") == std::string::npos)
	{
		if (this->getInput().find_first_of(".") != this->getInput().find_last_of(".") ||
			isdigit(this->getInput()[this->getInput().find_first_of(".") + 1]) == false ||
			this->getInput().find_first_of(".") == 0)
			return (ERROR);
		else
			return (DOUBLE);
	}
	else if (this->getInput().find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (this->getInput().find_first_of("f") != this->getInput().find_last_of("f") || 
			this->getInput().find_first_of(".") != this->getInput().find_last_of(".") || 
			this->getInput().find_first_of("f") - this->getInput().find_first_of(".") == 1 ||
			this->getInput().find_first_of(".") == 0 ||
			this->getInput()[this->getInput().find_first_of("f") + 1] != '\0')
			return (ERROR);
		else
			return (FLOAT);
	}
	else if ((this->getInput().length() == 1 && std::isprint(this->getInput()[0])) ||
			(this->getInput().length() == 1 && std::isalpha(this->getInput()[0])))
		return (CHAR);
	else
		return (ERROR);
}


void Convert::fromChar(void)
{
	this->_char = static_cast<unsigned char>(this->getInput()[0]);
	this->_int = static_cast<int>(this->getChar());
	this->_float = static_cast<float>(this->getChar());
	this->_double = static_cast<double>(this->getChar());
}
void Convert::fromInt(void)
{
	this->_int = static_cast<int>(this->getDouble());
	this->_char = static_cast<unsigned char>(this->getInt());
	this->_float = static_cast<float>(this->getDouble());
}
void Convert::fromFloat(void)
{
	this->_float = static_cast<float>(this->getDouble());
	this->_char = static_cast<char>(this->getFloat());
	this->_int = static_cast<int>(this->getFloat());
}
void Convert::fromDouble(void)
{
	this->_char = static_cast<char>(this->getDouble());
	this->_int = static_cast<int>(this->getDouble());
	this->_float = static_cast<float>(this->getDouble());
}

void	Convert::convertInput(void)
{
	void (Convert::*functionPTRS[])(void) = {&Convert::fromChar, &Convert::fromInt, &Convert::fromFloat, &Convert::fromDouble};
	int types[] = {CHAR, INT, FLOAT, DOUBLE};

	this->_type = checkInput();

	if (this->getType() == NAN_INF)
		return ;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (this->getType() == types[i])
		{
			(this->*functionPTRS[i])();
			break ;
		}
	}
	if (i == 4)
		throw Convert::ErrorException();
}

void	Convert::printOutput(void)const
{
	if (this->getType() != NAN_INF && this->getDouble() <= UCHAR_MAX && this->getDouble() >= 0)
	{
		if (isprint(this->getChar()))
			std::cout << "char: '" << this->getChar() << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	if (this->getType() != NAN_INF && this->getDouble() >= std::numeric_limits<int>::min() && this->getDouble() <= std::numeric_limits<int>::max())
		std::cout << "int: " << this->getInt() << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (this->getType() != NAN_INF)
	{
		std::cout << "float: " << this->getFloat();
		if (this->getFloat() - this->getInt() == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (this->getInput()[0] == '+')
			std::cout << "float: +inff" << std::endl;
		else
			std::cout << "float: -inff" << std::endl;
	}	
	if (this->getType() != NAN_INF)
	{
		std::cout << "double: " << this->getDouble();
		if (this->getDouble() < std::numeric_limits<int>::min() || this->getDouble() > std::numeric_limits<int>::max() ||
			this->getDouble() - this->getInt() == 0)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
	else
	{
		if (this->getInput() == "nan" || this->getInput() == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (this->getInput()[0] == '+')
			std::cout << "double: +inf" << std::endl;
		else
			std::cout << "double: -inf" << std::endl;
	}
}

const char *Convert::ErrorException::what(void) const throw()
{
	return ("Error: Impossible to print or input not convertable");
};

std::string	Convert::getInput(void)const
{
	return (this->_input);
}

int	Convert::getType(void)const
{
	return (this->_type);
}

char	Convert::getChar(void)const
{
	return (this->_char);
}

int	Convert::getInt(void)const
{
	return (this->_int);
}

float	Convert::getFloat(void)const
{
	return (this->_float);
}

double Convert::getDouble(void)const
{
	return (this->_double);
}
