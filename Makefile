# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkebethi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 10:46:26 by lkebethi          #+#    #+#              #
#    Updated: 2019/06/25 15:15:37 by lkebethi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc

CFLAG = -Wall -Wextra -Werror -c 

SOURCE =	 ft_atoi.c\
	 	 	ft_bzero.c\
	  		ft_isalnum.c\
	  		ft_isalpha.c\
	  		ft_isascii.c\
	  		ft_isdigit.c\
	  		ft_isprint.c\
	  		ft_itoa.c\
	  		ft_memalloc.c\
	  		ft_memccpy.c\
	  		ft_memchr.c\
	  		ft_memcmp.c\
	  		ft_memcpy.c\
	  		ft_memdel.c\
	  		ft_memmove.c\
	  		ft_memset.c\
	  		ft_putchar.c\
	  		ft_putchar_fd.c\
	  		ft_putendl.c\
	  		ft_putendl_fd.c\
	  		ft_putnbr.c\
	  		ft_putnbr_fd.c\
	  		ft_putstr.c\
	  		ft_putstr_fd.c\
	  		ft_strcat.c\
	  		ft_strchr.c\
	  		ft_strclr.c\
	  		ft_strcmp.c\
	  		ft_strcpy.c\
	  		ft_strdel.c\
	  		ft_strdup.c\
	  		ft_strequ.c\
	  		ft_striter.c\
	  		ft_striteri.c\
	  		ft_strjoin.c\
	  		ft_strlcat.c\
	  		ft_strlen.c\
	  		ft_strmap.c\
	  		ft_strmapi.c\
	  		ft_strncat.c\
	  		ft_strncmp.c\
	  		ft_strncpy.c\
	  		ft_strnequ.c\
	  		ft_strnew.c\
	  		ft_strnstr.c\
	  		ft_strrchr.c\
	  		ft_strsplit.c\
	  		ft_strstr.c\
	  		ft_strsub.c\
	  		ft_strtrim.c\
	  		ft_tolower.c\
	  		ft_toupper.c\

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAG) $(SOURCE)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		rm -f $(OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
