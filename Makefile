# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 10:46:26 by lkebethi          #+#    #+#              #
#    Updated: 2019/06/05 11:57:43 by lkebethi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = *.c

OBJ = *.o

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
