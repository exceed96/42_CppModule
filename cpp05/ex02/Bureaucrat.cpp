/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:17:08 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:17:28 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrat was constructed" << std::endl;
	if(grade > 150)
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
	std::cout << "Bureaucrat replace was consturucted" << std::endl;
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was deconstructed" << std::endl;
}

std::string Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int Bureaucrat::get_grade(void) const
{
	return (this->_grade);
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
const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("Grade is higher than 1");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is lower than 150");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << "<" <<  bureaucrat.get_name() << "> bureaucrat grade" << bureaucrat.get_grade() << std::endl;
	return o;
}

void Bureaucrat::signForm(Form &f)
{
	if(f.is_signed())
	{
		std::cout << "<" << this->_name << "> couldn't sign <" << f.get_name()
			<< "> already been signed" << std::endl;
	}
	try
	{
			f.beSigned(*this);
			std::cout << "<" << this->_name << "> is signed" << f.get_name()
				<< std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "<" << this->_name << "> couldn't sign <" << f.get_name()
			<< "> becase : " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) 
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->_name << "> executed " << form.get_name() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "<" << this->_name << "> failed to execute " << form.get_name() << " because : " << e.what() << std::endl;
	}
}
