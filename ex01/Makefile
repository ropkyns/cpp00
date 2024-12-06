# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: palu <palu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 13:28:00 by palu              #+#    #+#              #
#    Updated: 2024/12/06 13:28:27 by palu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			main.cpp

OBJ =			$(SRC:.cpp=.o)

CC =			c++

FLAG =			-Wall -Wextra -Werror -std=c++98

RM =			rm -f

NAME =			megaphone

all :			$(NAME)

$(NAME) :		$(OBJ)
					$(CC) $(FLAG) $(OBJ) -o $(NAME)
clean :
					$(RM) $(OBJ)
					$(RM) *~

fclean :		clean
					$(RM) $(NAME)

re :			fclean
					$(MAKE) $(NAME)

.PHONY: all clean fclean re