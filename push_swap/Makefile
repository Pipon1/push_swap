# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 12:44:16 by hefurrer          #+#    #+#              #
#    Updated: 2022/10/27 12:44:18 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC := ft_push_swap.c main.c ft_medium_check.c
LIB := libft/libft.a
NAME := push_swap

all: $(NAME)
	gcc -Wall -Werror -Wextra $(SRC) -L. -lft -o $(NAME)

$(NAME):
	make -C libft
	cp $(LIB) .


clean:
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	rm -f libft.a

re: fclean clean all
