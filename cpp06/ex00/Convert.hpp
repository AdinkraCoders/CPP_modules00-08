/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:57:03 by euyi              #+#    #+#             */
/*   Updated: 2022/11/09 20:51:25 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Convert {
private:
	char		_char;
	long double	_ifd;	// int, float, and double
	bool		_flag;

	Convert( void );
	void	validateInput( const std::string& ref );
	void	castToChar( void ) const;
	void	castToInt( void ) const;
	void	castToFloat( void ) const;
	void	castToDouble( void ) const;

public:

	Convert( std::string tmp );
	~Convert( void );
	Convert( const Convert& obj );

	Convert& operator = ( const Convert& obj );
};

#endif
