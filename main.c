/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 17:03:31 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initializing(int argc)
{
	stack_a()->array = malloc(sizeof(int) * argc);
	stack_b()->array = malloc(sizeof(int) * argc);
	stack_temp()->array = malloc(sizeof(int) * argc);
	stack_a()->size = 0;
	stack_b()->size = 0;
	stack_temp()->size = 0;
}

void	freeing(void)
{
	free(stack_a()->array);
	free(stack_temp()->array);
}

void	indexation(void)
{
	int	count;

	count = 0;
	while (stack_temp()->size > 0)
	{
		stack_a()->array[count] = stack_temp()->array[count];
		count++;
	}
}

void	size_2(void)
{
	if (stack_temp()->size == 2
		&& stack_temp()->array[0] > stack_temp()->array[1])
	{
		indexation();
		rotate_a();
	}
	else
		write(1, "Already sorted\n", 15);
}

int	main(int argc, char **argv)
{
	int	i;

	initializing(argc);
	if (argc <= 1)
		write(1, "Error\n", 6);
	i = -1;
	while (++i < argc - 1)
	{
		stack_temp()->array[i] = my_atoi(argv[i + 1]);
		stack_temp()->size++;
	}
	if (stack_temp()->size == 5 || stack_temp()->size == 3)
		indexation();
	else if (stack_temp()->size == 2)
		size_2();
	else if (stack_temp()->size == 3)
		numbers_3();
	else if (stack_temp()->size == 5)
		numbers_5();
	else
	{
		index_();
		radix();
	}
	freeing();
}
