# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hefurrer <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:18:47 by hefurrer          #+#    #+#              #
#    Updated: 2022/11/07 16:18:50 by hefurrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC				= errorcheck.c ft_sort.c main.c atoi_long.c ft_isalldigit.c

SWAP 			= ft_cinque.c ft_grand_triage.c ft_push.c ft_reverseandrotate.c ft_rotation.c ft_swap.c

FOLDER_SWAP 	= swap/

NAME			= push_swap

LIBFT 			= libft/libft.a

LIBFT_PATH		= ./libft

RM				= rm -f

CC				= gcc

CFLAGS  		= -Wall -Wextra -Werror

SRCS			= $(addprefix ${FOLDER_SWAP},${SWAP})

OBJS			= ${SRC:.c=.o}
OBJS_SWAP		= ${SRCS:.c=.o}

OBJ				= ${OBJS_SWAP} ${OBJS}

${NAME}:	${OBJ} ${LIBFT}
			${CC} ${CFLAGS} ${OBJ} ${LIBFT} -o ${NAME}

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIBFT}:
			${MAKE} -C ${LIBFT_PATH}

clean:
			${MAKE} clean -C ${LIBFT_PATH}
			${RM} ${OBJ}

fclean:		clean
			${MAKE} fclean -C ${LIBFT_PATH}
			${RM} ${NAME}

re :		fclean all

.PHONY:		all clean fclean re makemlx
