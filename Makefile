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
			rotate_a.c			\
			numbers_3.c			\
			numbers_5.c			\
			push_a.c			\
			push_b.c			\
			my_atoi.c			\
			static_stack.c		\
			index.c				\
			radix.c

OBJECTS	=	$(SOURCES:.c=.o)
CC	=	cc
CFLAGS = -Wall -Wextra -Werror
all:		$(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(OBJECTS) -o $(NAME)

clean:		
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re