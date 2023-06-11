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
	free(stack_b()->array);
	stack_a()->size = 0;
	stack_temp()->size = 0;
}

int	main(int argc, char **argv)
{
	initializing(argc);
	if (check_args(argc, argv) == 1)
		exit(1);
	atoi_help(argc, argv);
	if (duplicates(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (argv_sorted() == 1)
		exit(1);
	indexation();
	check_size();
	freeing();
	exit(0);
	return (0);
}
