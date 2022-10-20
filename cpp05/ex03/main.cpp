/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:57:53 by sangyeki          #+#    #+#             */
/*   Updated: 2022/10/20 16:21:56 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void) 
{
          Intern sangyeki;
          Bureaucrat b1("A", 149);
          Form* f1 = sangyeki.makeForm("Shrubbery", "Form");
          sangyeki.makeForm("Wrong", "Not create");
        
          if (!f1)
            return (1);
          std::cout << std::endl;
          std::cout << b1 << std::endl;
          std::cout << *f1 << std::endl;
          b1.signForm(*f1);
          std::cout << std::endl;
          b1.executeForm(*f1);

          delete f1;
}
