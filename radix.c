/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 18:18:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(void)
{
	int		count;
	int		count_2;
    int		max_bits;
	int		max_num;

	max_num = stack_a()->size;
	max_bits = 0;
	while (max_num >> max_bits != 0)
		max_bits++;
	count = -1;
	while (++count < max_bits)
	{
		count_2 = -1;
		while (++count_2 < max_num)
		{
			if (((stack_a()->array[0] >> count) & 1) != 1)
				push_b(stack_a()->array[0]);
			else
				rotate_a();
		}
		while (stack_b()->size > 0)
			push_a();
	}
}
