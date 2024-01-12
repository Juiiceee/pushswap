# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 15:57:01 by lbehr             #+#    #+#              #
#    Updated: 2024/01/12 15:56:24 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= bin/push
SRC_DIR		:= src
OBJ_DIR		:= obj
SRCS		:= push_swap.c swap.c push.c rotate.c reverse_rotate.c
SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
CC			:= cc
#NORM		:= norminette $(SRC_DIR)/*.c inc/*.h 
CFLAGS		:= -Wall -Wextra -Werror -g3
RM			:= rm -rf
DIR_DUP     = mkdir -p $(@D)

all		: $(NORM) $(NAME)

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

.PHONY: all clean fclean re