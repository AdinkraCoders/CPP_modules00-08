/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:02:21 by euyi              #+#    #+#             */
/*   Updated: 2022/11/04 16:13:35 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_

# include <iostream>
# include <string>
# include <stdexcept>

# include "Form.hpp"
class Form;

class Bureaucrat {
private:
	std::string const	_name;
	int					_grade;
	std::string			_signed;
	std::string 		_reason;
	int					_status; // setSigned(). 2 == formIsSigned, 3 == "BureaucratNotEnoughSigningGrade"

	Bureaucrat( void );

public:
	std::string const &	getName() const;
	int const &			getGrade() const;
	int const &			getStatus() const;

	void				setGrade( int *grade, int set );
	
	void				setSigned( std::string const & form, std::string const & reason, int status );
	void				signForm() const;

	void				executeForm(Form const & form);

	void				increment();
	void				decrement();
	
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat& obj );
	~Bureaucrat( void );
	
	Bureaucrat& operator=( const Bureaucrat& obj );
	
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj );



#endif
