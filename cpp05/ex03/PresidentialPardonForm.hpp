/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:55:39 by euyi              #+#    #+#             */
/*   Updated: 2022/11/03 21:06:56 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:

	PresidentialPardonForm();

public:
	void		subExecute() const;
	
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& obj );
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=( const PresidentialPardonForm& obj );
};

#endif
