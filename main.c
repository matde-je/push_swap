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
	t_stack	a;
	t_stack	b; 
	int	i;
	int	count;
	int	temp[argc - 1];

	if (*argv == NULL)
		return (0);
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (++i != argc)
	{
		temp[i - 1] = my_atoi(argv[i]);
	}
	a.array = argv;
	count = 0;
	while (count < a.size)
	{
		if (a.array[count] < 0)
			negative_number(&a);
		count++;
	}
	a = bit_shift(&a);
	if (a.size == 1)
		return (a.array[0]);
	else if (a.size == 2)
		rotate_a(&a, a.array[0]);
	else if (a.size == 3)
		numbers_3(&a);
	else if (a.size == 5)
		numbers_5(&a);
	else
		movements(&a, &b);
	free(a.array);
	free(b.array);
}
