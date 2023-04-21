# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 12:39:28 by matde-je          #+#    #+#              #
#    Updated: 2023/04/19 12:39:29 by matde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	main.c
			radix.c
			rotate.c
			numbers_3.c
			numbers_5.c
			push_a.c
			push_b.c
			movements.c
			ft_atoi.c


NAME 	=	push_swap.a
OBJECTS	=	$(SOURCES:.c=.o)
GCC	=	gcc	-Wall -Wextra -Werror

.c.o:
	$(GCC) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

clean:		
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re