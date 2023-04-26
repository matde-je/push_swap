/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 14:55:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	if (*argv == NULL)
		return (0);
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	while (++i != argc)
	{
		stack_temp()->array[i] = my_atoi(argv[i]);
	}
	stack_a()->array = stack_temp()->array;
	count = 0;
	while (count < stack_a()->size)
	{
		if (stack_a()->array[count] < 0)
			negative_number();
		count++;
	}
	bit_shift();
	if (stack_a()->size == 1)
		return (stack_a()->array);
	else if (stack_a()->size == 2 && stack_a()->array[0] > stack_a()->array[1])
		rotate_a();
	else if (stack_a()->size == 3)
		numbers_3();
	else if (stack_a()->size == 5)
		numbers_5();
	else
		movements();
}