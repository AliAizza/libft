# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:07:42 by aaizza            #+#    #+#              #
#    Updated: 2021/11/07 21:52:53 by aaizza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_atoi.c \
ft_bzero.c   ft_isascii.c ft_memchr.c  ft_memset.c  ft_strjoin.c ft_strncmp.c ft_substr.c \
ft_calloc.c  ft_isdigit.c ft_memcmp.c  ft_split.c   ft_strlcat.c ft_strnstr.c ft_tolower.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strrchr.c ft_toupper.c \

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