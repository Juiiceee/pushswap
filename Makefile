# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 15:57:01 by lbehr             #+#    #+#              #
#    Updated: 2024/01/26 14:46:02 by lbehr            ###   ########.fr        #
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
ARG3 := $(shell shuf -i 1-2000000 -n 3 | awk '{print $$1-1000000}' | tr '\n' ' ')
ARG5 := $(shell shuf -i 1-2000000 -n 5 | awk '{print $$1-1000000}' | tr '\n' ' ')
ARG100 := $(shell shuf -i 1-2000000 -n 100 | awk '{print $$1-1000000}' | tr '\n' ' ')
ARG500 := $(shell shuf -i 1-2000000 -n 500 | awk '{print $$1-1000000}' | tr '\n' ' ')
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

test3	:
	./bin/push_swap $(ARG3) | ./checker_linux $(ARG3)
	./bin/push_swap $(ARG3) | wc -l

test5	:
	./bin/push_swap $(ARG5) | ./checker_linux $(ARG5)
	./bin/push_swap $(ARG5) | wc -l

test100	:
	./bin/push_swap $(ARG100) | ./checker_linux $(ARG100)
	./bin/push_swap $(ARG100) | wc -l

test500	:
	./bin/push_swap $(ARG500) | ./checker_linux $(ARG500)
	./bin/push_swap $(ARG500) | wc -l

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