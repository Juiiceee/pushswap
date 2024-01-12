# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 15:48:52 by lbehr             #+#    #+#              #
#    Updated: 2023/11/22 18:58:22 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprintf.a
SRC = allprint.c ft_printf.c printhex.c printint.c printstr.c printptr.c
FLAG = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
DIR = obj/
RM = rm -f

all		:	$(NAME)

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

$(NAME)	:	$(OBJ)
	ar rcs $@ $^
	ranlib $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY: all clean fclean re