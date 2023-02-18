#pragma once
#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice : public AMateria {
private:
	std::string	_ice;

public:
	std::string const & getType() const;
	void				setType(std::string type);
	void				use( ICharacter& target );
	AMateria*			clone() const;

	Ice( void );
	Ice( const Ice& obj );
	~Ice( void );

	Ice&	operator=( const Ice& obj );
	
};

#endif
