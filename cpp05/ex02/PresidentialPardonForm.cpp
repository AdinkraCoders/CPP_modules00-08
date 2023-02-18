/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:53:42 by euyi              #+#    #+#             */
/*   Updated: 2022/11/03 21:08:46 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::subExecute() const 
{
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& obj ) {
	(void) obj;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ) : Form(obj.getName(), obj.getMinExec(), obj.getMinSign()) {
}

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Form(name, 5, 25) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm() : Form(NULL, 0, 0) {
}
