# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 15:57:01 by lbehr             #+#    #+#              #
#    Updated: 2024/01/23 10:52:39 by lbehr            ###   ########.fr        #
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
TESTEUR		:= git clone https://github.com/SimonCROS/push_swap_tester.git
TEST		:= ./push_swap_tester/complexity -f bin/push_swap

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

testeur :
	$(TESTEUR)
	@make -C ./push_swap_tester --no-print-directory

test3	:
	$(TEST) 3 500 3 checker_linux

test5	:
	$(TEST) 5 500 12 checker_linux

test100	:
	$(TEST) 100 500 1100 checker_linux

test500	:
	$(TEST) 500 500 7000 checker_linux

test	: $(NAME) test3 test5 test100 test500

clean	:
	$(RM) $(OBJS)
	$(RM) $(OBJ_DIR)
	@make -C include/ft_printf clean --no-print-directory
	@make -C include/liste clean --no-print-directory

fclean	:	clean
	$(RM) bin
	$(RM) push_swap_tester
	@make -C include/ft_printf fclean --no-print-directory
	@make -C include/liste fclean --no-print-directory

re		:	fclean all

.PHONY: all clean fclean re norm test3 test5 test100 test500 test testeur