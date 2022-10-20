/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:07:35 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 12:08:19 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <string>

class Bureaucrat
{
	private:
		std::string const _name;
		int				  _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);
		~Bureaucrat(void);
		std::string get_name() const; 
		int			get_grade() const;
		void		increment(void);
		void		decrement(void);
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
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);
#endif
