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

void    get_max(void)
{
	int	max;
	int	len;

	max = stack_temp()->array[stack_temp()->size -1];
	len = stack_temp()->size;
	while (--len > 0)
	{
		if (stack_temp()->array[len] > max)
			max = stack_temp()->array[len];
	}
	len = stack_temp()->size;
	while (--len >= 0)
	{
		if (stack_temp()->array[len] == max)
			break;
	}
	stack_a()->array[len] = stack_temp()->size;
	stack_a()->size += 1;
	while (++len < stack_temp()->size)
		stack_temp()->array[len -1] = stack_temp()->array[len];
	stack_temp()->size--;
	if (stack_temp()->size == 1)
	{
		stack_a()->array[len] = stack_temp()->size;
		stack_a()->size += 1;
	}
	if (stack_temp()->size > 1)
		get_max();
}