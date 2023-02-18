/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:29:27 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 17:50:43 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

void	Bureaucrat::setSigned( std::string const & form, std::string const & reason, int status )
{
	_signed = form;
	_reason = reason;
	_status = status;
}

void	Bureaucrat::signForm() const
{
	if ( _status == 2 )
		std::cout << _name << " signed " << _signed << std::endl;
	else if ( _status == 3 )
		std::cout << _name << " couldn’t sign " << _signed << " because " << _reason << std::endl;
}

void	Bureaucrat::increment()
{
	setGrade( &_grade, -1 );
}

void	Bureaucrat::decrement()
{
	setGrade( &_grade, 1 );
}

void	Bureaucrat::setGrade( int *grade, int set )
{
	if ( (*grade + set) < 1 )
		throw std::out_of_range("Bureaucrat::GradeTooHighException");
	else if ( (*grade + set) > 150 )
		throw std::out_of_range("Bureaucrat::GradeTooLowException");
	else
		*grade += set;
}

int const &	Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string const &	Bureaucrat::getName() const
{
	return (_name);
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj ) {
	_grade = obj.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ) : _name(obj.getName()), _grade(obj.getGrade()) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	this->setGrade( &_grade, 0);
}

Bureaucrat::Bureaucrat( void ) {
}

Bureaucrat::~Bureaucrat( void ) {
}

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj ) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (out);
}
