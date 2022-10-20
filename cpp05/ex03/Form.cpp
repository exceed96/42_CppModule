/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:24:27 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 15:24:47 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	std::cout << "Form was constructed" << std::endl;
	if(signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	else if(signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade)
{
	std::cout << "Form CoPy was constructed" << std::endl;
	*this = form;
}

Form &Form::operator=(const Form &form)
{
	std::cout << "Form replace was constructed" << std::endl;
	this ->_isSigned = form._isSigned;
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form was deconstructed" << std::endl;
}

std::string Form::get_name(void) const
{
	return (this->_name);
}

int Form::get_signGrade(void) const
{
	return (this->_signGrade);
}

int Form::get_execGrade(void) const
{
	return (this->_execGrade);
}

bool Form::is_signed(void) const
{
	return (this->_isSigned);
}

void Form::beSigned(const Bureaucrat &bureaucrat) 
{
	if(this->_isSigned)
	{
		std::cout << "<" << this->_name << ">" << "Form has already signed" << std::endl;
		return ;
	}
	if (bureaucrat.get_grade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else if(bureaucrat.get_grade() <= this->_signGrade)
		this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	o << "-------------------------------------" << std::endl;
	o << "Form : " << form.get_name() << std::endl;
	o << "Sign Grade : " << form.get_signGrade() << std::endl;
	o << "Exec Grade : " << form.get_execGrade() << std::endl;
	o << "Is signed : " << (form.is_signed() ? "Yes" : "No") << std::endl;
	o << "--------------------------------------";
	return o;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::FormNotSignedException::~FormNotSignedException(void) throw() {}
const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is higher than 1";
}
const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is lower than required";
}
const char *Form::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}

void Form::execute(const Bureaucrat &executor) const 
{
	if(!this->_isSigned)
		throw FormNotSignedException();
	if(executor.get_grade() > this->_execGrade)
		throw GradeTooLowException();
}
