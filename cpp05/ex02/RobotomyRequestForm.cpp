/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:57:31 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 20:00:35 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::subExecute() const 
{
	int	n;

	srand (time(NULL));
	n = rand() % 2 + 1; 

	std::cout << "((((((((DRILLING NOISE)))))))))" << std::endl;
	if ( n == 1 ) 
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getName() << " robotomy failed" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& obj ) {
	(void) obj;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj ) : Form(obj.getName(), obj.getMinExec(), obj.getMinSign()) {
}

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Form(name, 45, 72) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm() : Form(NULL, 0, 0) {
}
