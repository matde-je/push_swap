/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 18:18:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_(void)
{
	int	max;
	int	len;
	int count;

	len = stack_temp()->size;
	max = stack_temp()->array[len -1];
	count = 0;
	while (stack_temp()->size > 0)
	{
		while (len > 0)
		{
			if (stack_temp()->array[len -1] > max)
				max = stack_temp()->array[len -1];
			len--;
		}
		while (stack_temp()->size > 0)
		{
			if (stack_temp()->array[stack_temp()->size -1] == max)
			{
				stack_temp2()->array[count] = stack_temp()->array[count];
				stack_temp()->array[count] = stack_temp()->array[stack_temp()->size -1];
				stack_temp()->array[stack_temp()->size -1] = stack_temp2()->array[count];
			}
			stack_temp()->size--;
		}
		len = stack_temp()->size;
		stack_a()->array[len -1] = len;
		len--;
		stack_temp()->size--;
	}
	free(stack_temp2()->array);
	free(stack_temp()->array);
}
