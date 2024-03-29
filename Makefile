# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 10:07:42 by aaizza            #+#    #+#              #
#    Updated: 2021/11/16 21:03:04 by aaizza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_atoi.c \
ft_bzero.c   ft_isascii.c ft_memchr.c  ft_memset.c  ft_strjoin.c ft_strncmp.c ft_substr.c \
ft_calloc.c  ft_isdigit.c ft_memcmp.c  ft_split.c   ft_strlcat.c ft_strnstr.c ft_tolower.c \
ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strrchr.c ft_toupper.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
ft_lstnew_bonus.c ft_lstsize_bonus.c 

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:		${NAME}

${NAME}:
			${CC} ${FLAGS} -c ${SRC}
			ar -rc ${NAME} ${OBJS}

bonus:
			${CC} ${FLAGS} -c ${BONUS}
			ar -rc ${NAME} ${OBJS_BONUS}

clean:
			rm -f ${OBJS} ${OBJS_BONUS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean flean re