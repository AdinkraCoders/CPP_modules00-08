# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 16:57:06 by euyi              #+#    #+#              #
#    Updated: 2022/11/04 15:29:28 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	intern

SRC		=	main.cpp	Bureaucrat.cpp	Form.cpp	ShrubberyCreationForm.cpp	\
			PresidentialPardonForm.cpp	RobotomyRequestForm.cpp	Intern.cpp

OBJ			=	$(SRC:.cpp=.o)

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX)	$(CXXFLAGS) $(OBJ)	-o $(NAME)

clean:		
			/bin/rm -f $(OBJ)
				
fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean	all

.PHONY:		all	clean	fclean	re
