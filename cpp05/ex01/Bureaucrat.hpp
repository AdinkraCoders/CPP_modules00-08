/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:02:21 by euyi              #+#    #+#             */
/*   Updated: 2022/11/02 19:06:10 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat {
private:
	std::string const	_name;
	int					_grade;
	std::string			_signed;
	std::string 		_reason;
	int					_status;

	Bureaucrat( void );

public:
	std::string const &	getName() const;
	int const &			getGrade() const;

	void				setGrade( int *grade, int set );
	
	void				setSigned( std::string const & form, std::string const & reason, int status );
	void				signForm() const;

	void				increment();
	void				decrement();
	
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat& obj );
	~Bureaucrat( void );
	
	Bureaucrat& operator=( const Bureaucrat& obj );
	
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj );



#endif
