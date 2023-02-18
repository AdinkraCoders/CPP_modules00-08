/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:37:05 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 18:05:49 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

void	Form::execute(Bureaucrat const & executor) const
{
	if ( executor.getStatus() != 2 )
		throw std::out_of_range( _name + " FormNotYetSignedException!");
	else if ( executor.getGrade() > this->getMinExec() )
		throw std::out_of_range(executor.getName() + " GradeTooLowException!");
	else if ( executor.getStatus() == 2 )
		subExecute();
}

void	Form::beSigned( Bureaucrat& obj )
{
	// try {
	// 	checkException("_min_exec", obj.getGrade(), _min_exec);
	// }
	// catch (std::out_of_range & what) {
	// 	obj.setSigned(_name, what.what(), 3);
	// 	return ;
	// }
	
	try {
		checkException("_min_sign", obj.getGrade(), _min_sign);
	}
	catch (std::out_of_range & what) {
		obj.setSigned(_name, what.what(), 3);
		return ;
	}
	_sign = true;
	obj.setSigned(_name, _name, 2);
}

void	Form::checkException(std::string name, const int var, int min) const
{
	if ( var < 1 )
		throw std::out_of_range("Form::GradeTooHighException for " + name);
	else if ( var > min )
		throw std::out_of_range("Form::GradeTooLowException for " + name);
}

int const &	Form::getMinExec() const
{
	return (_min_exec);
}

int const &	Form::getMinSign() const
{
	return (_min_sign);
}

bool const &	Form::getSign() const
{
	return (_sign);
}

std::string const &	Form::getName() const
{
	return (_name);
}

Form&	Form::operator=( const Form& obj ) {
	_sign = obj.getSign();
	return (*this);
}

Form::~Form() {
}

Form::Form( const Form& obj ) : _name(obj.getName()), _sign(obj.getSign()),
						_min_exec(obj.getMinExec()), _min_sign(obj.getMinSign()) {
}

Form::Form(std::string name, int min_exec, int min_sign) : _name(name), _sign(0),
												_min_exec(min_exec), _min_sign(min_sign) {
	checkException("_min_exec", _min_exec, 150);
	checkException("_min_sign", _min_sign, 150);
}

Form::Form() : _name(), _sign(0), _min_exec(), _min_sign() {
}

std::ostream&	operator<<(std::ostream& out, Form& obj) {
	out <<  "Form name: " << obj.getName() << ".\nSigned? " << obj.getSign()
		<< ".\nMin Grade to permit Executor: " << obj.getMinExec()
		<< ".\nMin Grade to permit signor: " << obj.getMinSign() << ".";
	return (out);
}
