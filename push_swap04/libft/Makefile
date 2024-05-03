# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 11:05:22 by rpocater          #+#    #+#              #
#    Updated: 2024/02/02 17:04:53 by rpocater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_printf.c ft_argument_percent.c ft_argument_c.c ft_argument_s.c ft_argument_p.c ft_arguments_d_i.c ft_decimal_length.c ft_hex_length.c ft_decimal_converter_to_hex.c ft_print_reversed_str.c ft_free_ptr.c ft_argument_u.c ft_arguments_x.c get_next_line.c
OBJS	= ${SRCS:.c=.o}
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= libft.h
RM		= @rm -f
%.o:		%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<
all: $(NAME)
$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean:		clean
	$(RM) $(NAME)
re:		fclean all
.PHONY: clean fclean all re
