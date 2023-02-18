/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:15:56 by euyi              #+#    #+#             */
/*   Updated: 2022/11/03 21:07:03 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:

	ShrubberyCreationForm();

public:
	void		subExecute() const;
	
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& obj );
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=( const ShrubberyCreationForm& obj );
};

#endif
