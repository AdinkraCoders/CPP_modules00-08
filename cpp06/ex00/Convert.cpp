/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:04:57 by euyi              #+#    #+#             */
/*   Updated: 2022/11/09 21:02:55 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

// ******************************************************
// sets _flag = false if ref is invalid double PF		*
// ******************************************************
void	Convert::validateInput(const std::string& ref)
{
	size_t	i;

	i = 0;
	if ( ref.length() == 1 && (ref.at(0) < 48 || ref.at(0) > 57) )
	{
		_char = ref.at(0);
		_ifd = static_cast<int>(ref.at(0));
		return ;
	}
	if ( ref.at(i) == '+' || ref.at(i) == '-' )
		i++;
	while ( i < ref.length()  && ref.at(i) == '0' )
		i++;
	while ( i < ref.length() && ref.at(i) > 47 && ref.at(i) < 58 )
		i++;
	if ( i < ref.length() && ref.at(i) == '.' )
		i++;
	while ( i < ref.length() && ref.at(i) > 47 && ref.at(i) < 58 )
		i++;
	if ( i < ref.length() && (ref.at(i) == 'F' || ref.at(i) == 'f') )
		i++;
	if ( i  == ref.length() )
		return ;
	this->_flag = false;
}

void	Convert::castToChar( void ) const
{
	std::cout << "char: ";
	if ( this->_char )
	{
		std::cout << _char << std::endl;
		return ;
	}
	if ( this->_ifd >= 0 && this->_ifd <= 32 && this->_flag == true )
		std::cout << "Non displayable" << std::endl;
	else if ( this->_flag == false || this->_ifd > 126 || this->_ifd < 0)
		std::cout << "impossible" << std::endl;
	else if ( this->_ifd >= 33 && this->_ifd <= 126 )
		std::cout << "'" << static_cast<char>(this->_ifd) << "'" << std::endl;
}

void	Convert::castToInt( void ) const
{
	std::cout << "int: ";
	if ( this->_flag == false || this->_ifd > 2147483647 || this->_ifd < -2147483648 )
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->_ifd) << std::endl;
}

void	Convert::castToFloat( void ) const
{
	float tmp = static_cast<float>(this->_ifd);
	
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1);
	if ( this->_flag )
		std::cout << tmp << "f" << std::endl;
	else
		std::cout << "nanf" << std::endl;
}

void	Convert::castToDouble( void ) const
{
	double tmp = static_cast<double>(this->_ifd);
	
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1);
	if ( this->_flag )
		std::cout << tmp << std::endl;
	else
		std::cout << "nan" << std::endl;
}

Convert::Convert( std::string tmp ) : _char(0), _ifd(0), _flag(true) {
	std::stringstream	str;
	
	validateInput(tmp);
	
	str << tmp;
	if ( !_ifd && _flag )
		str >> _ifd;

	castToChar();
	castToInt();
	castToFloat();
	castToDouble();
}

Convert::Convert( void ) {
}

Convert::~Convert( void ) {
}

Convert::Convert( const Convert& obj ) {
	(void) obj;
}

Convert& Convert::operator = ( const Convert& obj ) {
	(void) obj;
	return (*this);
}
