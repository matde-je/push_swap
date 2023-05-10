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

int	main(int argc, char **argv)
{
	int	i;

	stack_a()->array = malloc(sizeof(int) * argc);
	stack_b()->array = malloc(sizeof(int) * argc);
	stack_temp()->array = malloc(sizeof(int) * argc);
	stack_temp2()->array = malloc(sizeof(int) * argc);
	if (argc <= 1)
		write(1, "Error\n", 6);
	i = -1;
	stack_temp()->size = 0;
	while (++i < argc - 1)
	{
		stack_temp()->array[i] = my_atoi(argv[i + 1]);
		stack_temp()->size++;
	}
	index_();
	if (stack_a()->size == 2 && stack_a()->array[0] > stack_a()->array[1])
		rotate_a();
	else if (stack_a()->size == 2)
		write(1, "Already sorted\n", 15);
	if (stack_a()->size == 3)
		numbers_3();
	if (stack_a()->size == 5)
		numbers_5();
	else
		radix();
	return (0);
	free(stack_a()->array);
	free(stack_b()->array);
}