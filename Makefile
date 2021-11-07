# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:07:42 by aaizza            #+#    #+#              #
#    Updated: 2021/11/07 10:18:04 by aaizza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_itoa.c ft_split.c ft_strdup.c 

OBJS = ${SRC:.c=.o}

HEADER = libft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:		${NAME}

.c.o:
			${CC} ${FLAGS} -c -I ${HEADER} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean flean re
