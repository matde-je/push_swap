/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:50 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(void)
{
	int	max;
	int	len;

	len = stack_temp()->size;
	max = stack_temp()->array[0];
	while (--len > 0)
	{
		if (max < stack_temp()->array[len])
			max = stack_temp()->array[len];
	}
	return (max);
}

int	get_min(void)
{
	int	min;
	int	len;

	min = stack_temp()->array[0];
	len = stack_temp()->size;
	while (--len > 0)
	{
		if (min > stack_temp()->array[len])
			min = stack_temp()->array[len];
	}
	return (min);
}

void	get_next_max(int min, int max, int len, int len2)
{
	int	tmp2;
	int	tmp;

	tmp2 = max;
	while (--stack_temp()->size > 1)
	{
		tmp = min;
		while (--len >= 0)
		{
			if (min < stack_temp()->array[len]
				&& stack_temp()->array[len] < max
				&& stack_temp()->array[len] < tmp2
				&& stack_temp()->array[len] > tmp)
				tmp = stack_temp()->array[len];
		}
		tmp2 = tmp;
		len = len2;
		while (--len >= 0)
		{
			if (stack_temp()->array[len] == tmp)
				break ;
		}
		stack_a()->array[len] = stack_temp()->size;
		stack_a()->size++;
		len = len2;
	}
}

void	index_(void)
{
	int	min;
	int	max;
	int	len;
	int	len2;

	min = get_min();
	max = get_max();
	len = stack_temp()->size;
	len2 = len;
	while (--len >= 0)
	{
		if (stack_temp()->array[len] == max)
			break ;
	}
	stack_a()->array[len] = stack_temp()->size;
	len = stack_temp()->size;
	while (--len >= 0)
	{
		if (stack_temp()->array[len] == min)
			break ;
	}
	stack_a()->array[len] = 1;
	stack_a()->size = 2;
	len = stack_temp()->size;
	get_next_max(min, max, len, len2);
}
