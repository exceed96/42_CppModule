/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:24:16 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:18:52 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		int const 		  _signGrade;
		int const		  _execGrade;
		bool		   	  _isSigned;
	public:
		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &form);
		Form &operator=(const Form &form);
		virtual ~Form(void);

		std::string get_name(void) const;
		int			get_signGrade(void) const;
		int			get_execGrade(void) const;
		bool		is_signed(void) const;
		virtual void		execute(const Bureaucrat &executor) const;
		virtual void		beSigned(const Bureaucrat &bureaucrat) = 0;
	class GradeTooHighException : public std::exception
	{
		public:
			~GradeTooHighException(void) throw();
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			~GradeTooLowException(void) throw();
			const char* what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		public:
			~FormNotSignedException(void) throw();
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif
