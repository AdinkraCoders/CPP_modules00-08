/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:47 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 19:45:48 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <stdlib.h> 	/* srand, rand */
# include <time.h>		/* time */
# include "Form.hpp"

class RobotomyRequestForm : public Form {
private:

	RobotomyRequestForm();

public:
	void		subExecute() const;
	
	
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& obj );
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=( const RobotomyRequestForm& obj );
};

#endif
