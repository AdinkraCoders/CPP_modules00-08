/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:05:42 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 17:46:33 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FORM_hPP_
# define __FORM_hPP_

# include <iostream>
# include <string>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form {
private:
	std::string const	_name;
	bool				_sign;
	int const			_min_exec;
	int const			_min_sign;

	Form();

public:
	std::string const &	getName() const;
	bool const &		getSign() const;
	int const &			getGrade() const;
	int const &			getExec() const;

	void				checkException(std::string name, const int var, int min) const;

	void				beSigned( Bureaucrat& obj );

	Form(std::string name, int min_exec, int min_sign);
	Form( const Form& obj );
	~Form();
	
	Form&	operator=( const Form& obj );
};

std::ostream&	operator<<(std::ostream& out, Form& obj);

#endif
