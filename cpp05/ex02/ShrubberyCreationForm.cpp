/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:41:55 by euyi              #+#    #+#             */
/*   Updated: 2022/11/03 21:07:53 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::subExecute() const 
{
	std::ofstream 	fout;
	std::string 	name(getName() + "_shrubbery");
	
	fout.open(name.data(), std::ios::out | std::ios::trunc );
	if ( fout.good() )
	{
		fout << "	     ccee88oo" << std::endl
			<< "  C8O8O8Q8PoOb o8oo" << std::endl
			<< " dOB69QO8PdUOpugoO9bD" << std::endl
			<< "CgggbU8OU qOp qOdoUOdcb" << std::endl
			<< "    6OuU  /p u gcoUodpP" << std::endl
			<< "       \\//\\/douUP" << std::endl
			<< "        \\\\///" << std::endl
			<< "         |||/|" << std::endl
			<< "         |||/|" << std::endl
			<< "         //|\\" << std::endl
			<< "   .....//||/|\\...." << std::endl;
		fout.close();
	}
	else
		std::cout << "couldn't create file " << name << " in CWD" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& obj ) {
	(void) obj;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj ) : Form(obj.getName(), obj.getMinExec(), obj.getMinSign()) {
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name ) : Form(name, 137, 145) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form(NULL, 0, 0) {
}
