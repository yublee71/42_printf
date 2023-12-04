# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yublee <yublee@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 14:44:19 by yublee            #+#    #+#              #
#    Updated: 2023/12/04 20:41:05 by yublee           ###   ########.fr        #
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

LIBFT_DIR = ./libft

LIBFT_LIB = ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_LIB)
	cp $(LIBFT_LIB) $@
	$(AR) $(ARFLAGS) $@ $(OBJ)

$(LIBFT_LIB):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(RMFLAGS) $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
	$(RM) $(RMFLAGS) $(LIBFT_LIB)

re: fclean all

.PHONY: all clean fclean re
