/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:08:24 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:09:02 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrat was constructed" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name)
{
	std::cout << "Bureaucrat CoPy was constructed" << std::endl;
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat Replace was constructed" << std::endl;
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was deconstructed" << std::endl;
}

std::string Bureaucrat::get_name(void) const
{
	return this->_name;
}

int Bureaucrat::get_grade(void) const
{
	return this->_grade;
}

void Bureaucrat::increment(void)
{
	if(this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrement(void)
{
	if(this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw () {}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw () {}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is higher than 1");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is lower than 150");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << "<" << bureaucrat.get_name() << "> bureaucrat grade is " << bureaucrat.get_grade() << std::endl;
	return o;
}
