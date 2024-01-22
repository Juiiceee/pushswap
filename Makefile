# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 15:57:01 by lbehr             #+#    #+#              #
#    Updated: 2024/01/22 17:34:25 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= bin/push_swap
SRC_DIR		:= src
OBJ_DIR		:= obj
SRCS		:= push_swap.c swap.c push.c sortcomplexe.c sort2-3.c sort4-5.c rotate.c reverse_rotate.c checkarg.c utils.c add.c ft_split.c utilsort.c
SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
CC			:= cc
NORM		:= norminette $(SRC_DIR)/*.c inc/*.h include/*
CFLAGS		:= -Wall -Wextra -Werror -g3
RM			:= rm -rf
DIR_DUP		= mkdir -p $(@D)

all		: norm $(NAME)

norm	:
	$(NORM)

$(NAME)	:	$(OBJS)
	$(DIR_DUP)
	@make -C include/ft_printf --no-print-directory
	@make -C include/liste --no-print-directory
	$(CC) $(OBJS) include/ft_printf/libftprintf.a include/liste/liste.a -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) -c $< $(CFLAGS) -o $@

clean	:
	$(RM) $(OBJS)
	$(RM) $(OBJ_DIR)
	@make -C include/ft_printf clean --no-print-directory
	@make -C include/liste clean --no-print-directory

fclean	:	clean
	$(RM) bin
	@make -C include/ft_printf fclean --no-print-directory
	@make -C include/liste fclean --no-print-directory

re		:	fclean all

.PHONY: all clean fclean re norm