/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 18:11:22 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	negative_numbers(void)
{
	int	count;

	count = 0;
	while (stack_a()->size > 0 && count < stack_a()->size)
	{
		if (stack_a()->array[stack_a()->size -1] < 0)
		{
			stack_a()->array[count] = stack_a()->array[stack_a()->size -1];
			stack_a()->array[stack_a()->size -1] = stack_a()->array[count];
			count++;
		}
		stack_a()->size--;
	}
	while (stack_a()->size > 0)
	{
		if (stack_a()->array[stack_a()->size -1] < 0)
		{
			if 
		}
	}
}
