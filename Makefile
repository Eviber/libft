# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygaude <ygaude@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 02:18:15 by ygaude            #+#    #+#              #
#    Updated: 2016/11/09 14:36:53 by ygaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
#ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
#	  ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_strcpy.c \
#	  ft_strdup.c ft_strlen.c ft_strncpy.c

OBJ = *.o
#ft_bzero.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
#	  ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_strcpy.o \
#	  ft_strdup.o ft_strlen.o ft_strncpy.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

only: all clean

fclean: clean
	rm -f $(NAME)

re: fclean all
