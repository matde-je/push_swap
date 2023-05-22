/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:50 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argv_(int argc, char **argv)
{
	int	e;
	int	i;

	i = 0;
	e = 1;
	while (e < argc)
	{
		while (argv[e][i] != '\0')
		{
			if (argv[1][i] > 57 || argv[1][i] < 48)
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i++;
		}
		i = 0;
		e++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		write(1, "Already sorted\n", 15);
		return (1);
	}
	if (argv_(argc, argv) == 1)
		return (1);
	return (0);
}

int	argv_sorted(void)
{
	int	i;
	int	len;

	i = 0;
	len = stack_temp()->size + 1;
	while (--len > 0)
	{
		if (stack_temp()->array[i] < stack_temp()->array[i + 1])
			return (0);
		i++;
	}
	write(1, "Already sorted\n", 15);
	return (1);
}

void	check_size(void)
{
	if (stack_temp()->size <= 5 && stack_temp()->size != 4)
		indexation();
	if (stack_a()->size == 2)
		rotate_a();
	else if (stack_a()->size == 5)
		numbers_5();
	else if (stack_a()->size == 3)
		numbers_3();
	else
	{
		index_();
		radix();
	}
}
