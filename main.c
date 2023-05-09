/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 18:18:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		write(1, "Error\n", 6);
	i = -1;
	while (++i != argc)
		stack_temp()->array[i] = my_atoi(argv[i + 1]);
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
}
