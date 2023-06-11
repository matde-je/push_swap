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

int	argv_checker(int argc, char **argv)
{
	int	e;
	int	i;

	i = 0;
	e = 1;
	while (e < argc)
	{
		while (argv[e][i] != '\0')
		{
			if ((argv[e][i] > 57 || argv[e][i] < 48) && argv[e][i] != 45)
			{
				write(1, "Error\n", 6);
				return (1);
			}
			if (argv[e][i] == 45 && (argv[e][i + 1] > 57 || argv[e][i +1] < 48))
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

int	duplicates_pt2(char **argv, int e, int i, int t)
{
	int	a;

	a = 0;
	while (argv[e][i] != '\0' && argv[e][i] == argv[e + t][i])
	{
		i++;
		if (argv[e][i] != argv[e + t][i])
		{
			a = 1;
			break ;
		}
		else
			a = 2;
	}
	return (a);
}

int	duplicates(int argc, char **argv)
{
	int	e;
	int	i;
	int	t;
	int	a;

	e = 1;
	while (e < argc)
	{
		t = 1;
		while (t < argc - e)
		{
			i = 0;
			a = duplicates_pt2(argv, e, i, t);
			if (a == 2)
				return (1);
			t++;
		}
		e++;
	}		
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (argc <= 2)
		return (1);
	if (argv_checker(argc, argv) == 1)
		return (1);
	if (argc == 2)
		return (1);
	return (0);
}

int	argv_sorted(void)
{
	int	len;

	len = stack_temp()->size;
	while (--len >= 0)
	{
		if (stack_temp()->array[len] < stack_temp()->array[len - 1])
			return (0);
	}
	return (1);
}
