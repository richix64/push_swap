# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 11:51:55 by rpocater          #+#    #+#              #
#    Updated: 2024/02/13 14:01:15 by rpocater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MANDATORY_NAME  = push_swap
BONUS_NAME  = checker
SRCS	= instructions.c instructions_two.c instructions_three.c utils.c utils_two.c radix.c simple.c check_args.c index.c t_list.c
BNS_SRCS	= checker_utils_bonus.c
MANDATORY_MAIN  = main.c
BONUS_MAIN  = checker_bonus.c
LIBFT	= ./libft/libft.a
OBJS	= ${SRCS:.c=.o}
BNS_OBJS	= $(BNS_SRCS:%.c=%.o)
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
ifdef FLAG_BONUS
	TOTAL_OBJS = $(OBJS) $(BNS_OBJS) $(BONUS_MAIN)
	NAME	= $(BONUS_NAME)
else
	TOTAL_OBJS = $(OBJS) $(MANDATORY_MAIN)
	NAME	= $(MANDATORY_NAME)
endif
HEADER	= push_swap.h
RM	= rm -f
%.o:		%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<
all:	$(NAME)
$(NAME):	$(TOTAL_OBJS) ${LIBFT}
	$(CC) $(CFLAGS) -o $(NAME) $(LIBFT) $(TOTAL_OBJS)
${LIBFT}:
	make all -C libft
	cp ${LIBFT} ${NAME}
bonus:
	make all FLAG_BONUS=1
clean:
	$(RM) $(OBJS) $(BNS_OBJS)
fclean:	clean
	$(RM) $(MANDATORY_NAME) $(BONUS_NAME)
	make fclean -C libft
re:		fclean all
.PHONY: clean fclean all re bonus
