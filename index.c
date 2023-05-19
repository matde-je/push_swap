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

void	index_(int min, int max, int len)
{
	int	len2;
	int	tmp2;
	int	tmp;

	len2 = len;
	tmp = max;
	while (--stack_temp()->size > 0)
	{
		while (--len >= 0)
		{
			if (min < stack_temp()->array[len]
				&& stack_temp()->array[len] < max
				&& stack_temp()->array[len] < tmp2)
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
		len = len2;
	}
}

void	get_next_max(void)
{
	int	min;
	int	max;
	int	len;

	min = get_min();
	max = get_max();
	len = stack_temp()->size;
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
	len = stack_temp()->size;
	index_(min, max, len);
}
