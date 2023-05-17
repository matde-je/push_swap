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
	int	len2;

	max = stack_temp()->array[stack_temp()->size -1];
	len = stack_temp()->size +1;
	while (--len > 0)
	{
		if (stack_temp()->array[len -1] > max)
		{
			max = stack_temp()->array[len -1];
			len2 = len;
		}
	}
	stack_a()->array[len2 -1] = stack_temp()->size;
	while (++len2 < stack_temp()->size + 1)
	{
		stack_temp()->array[len2 -2] = stack_temp()->array[len2 -1];
		stack_temp()->size--;
	}
	get_max();  
}