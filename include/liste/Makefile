# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 15:48:52 by lbehr             #+#    #+#              #
#    Updated: 2024/01/12 12:02:49 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = liste.a
SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c
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