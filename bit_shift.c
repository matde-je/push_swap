/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:34:48 by marvin            #+#    #+#             */
/*   Updated: 2023/04/27 12:20:23 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bit_shift(void)
{
	int	count;

	count = 0;
	while (count < stack_a()->size)
	{
		while (stack_a()->array[count] > 0)
		{
			stack_temp()->array[count] = stack_a()->array[count] % 2;
			stack_a()->array[count] /= 2;
		}
		count++;
	}
	stack_a()->array = stack_temp()->array;
}
