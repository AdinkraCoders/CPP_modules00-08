/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:14 by euyi              #+#    #+#             */
/*   Updated: 2022/11/10 16:17:33 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main()
{
	Base	*obj = generate();
	identify(obj);
	delete obj;

	// Reference Test
	// A	obj2;
	// identify(obj2);

	return (0);
}
