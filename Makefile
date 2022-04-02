# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 11:17:10 by mmanouze          #+#    #+#              #
#    Updated: 2022/03/27 15:47:36 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker

SRCS = extra.c \
ft_error.c \
large_op.c \
list_utils.c \
main.c \
moves.c \
push.c \
rev_rotate.c \
rotate.c \
swap.c 

SRCS_BONUS = my_checker/checker_utils.c \
my_checker/ft_error.c \
my_checker/get_next_line_utils.c \
my_checker/get_next_line.c \
my_checker/list_utils.c \
my_checker/main.c \
my_checker/moves.c \
my_checker/push.c \
my_checker/rev_rotate.c \
my_checker/rotate.c \
my_checker/swap.c

CC = cc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

bonus: ${BONUS}

${BONUS}: ${OBJS_BONUS}
	${CC} ${CFLAGS} ${OBJS_BONUS} -o ${BONUS}

clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean:    clean
	rm -f ${NAME} ${BONUS}

re:    fclean all

.PHONY: all clean fclean re