# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 12:39:28 by matde-je          #+#    #+#              #
#    Updated: 2023/05/10 13:38:55 by matde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES =	main.c				\
			rotate.c			\
			sizes.c				\
			push.c				\
			swap.c				\
			my_atoi.c			\
			static_stack.c		\
			index.c				\
			checkers.c			\
			index2.c			\
			radix.c

OBJECTS	=	$(SOURCES:.c=.o)
CC	=	cc -g
#CFLAGS = -Wall -Wextra -Werror
all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(OBJECTS) -o $(NAME)

clean:		
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re