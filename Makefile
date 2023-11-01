# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: riolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:04:18 by riolivei          #+#    #+#              #
#    Updated: 2022/11/18 14:29:08 by riolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -rf
NAME = libftprintf.a

LIB_SRCS = ft_printf.c ft_printf_functions.c ft_printf_extra_functions.c

LIB_OBJS = ${LIB_SRCS:.c=.o}

all: ${NAME}

${NAME}: ${LIB_OBJS}
		ar rc ${NAME} ${LIB_OBJS}
		
clean:
		${RM} ${LIB_OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all