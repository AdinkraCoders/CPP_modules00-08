# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 16:57:06 by euyi              #+#    #+#              #
#    Updated: 2022/11/11 19:46:57 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	array

SRC		=	main.cpp

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
