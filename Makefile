# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yublee <yublee@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 14:44:19 by yublee            #+#    #+#              #
#    Updated: 2023/11/20 20:41:19 by yublee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm

RMFLAGS = -fv

AR = ar

ARFLAGS = rcs

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_print_int.c \
	  ft_print_unsigned.c \
	  ft_print_str.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
