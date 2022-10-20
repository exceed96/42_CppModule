/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:23:41 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:23:45 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <string>

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int 		_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat(void);
		std::string get_name() const;
		int			get_grade() const;
		void		increment(void);
		void		decrement(void);
		void		signForm(Form &f);
		void		executeForm(const Form &form);
	class GradeTooHighException : public std::exception
	{
		public:
			~GradeTooHighException(void) throw ();
			const char* what() const throw ();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			~GradeTooLowException(void) throw ();
			const char* what() const throw ();
	};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
