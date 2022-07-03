# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tliangso <tliangso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 03:49:49 by tliangso          #+#    #+#              #
#    Updated: 2022/07/03 22:43:25 by tliangso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRSRC		= srcs/

SRC			= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
				ft_strdup.c ft_strcpy.c

SRCS		= ${addprefix ${DIRSRC}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

HEAD		= .

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
