/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:10 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 12:41:41 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	movements(void)
{
    int	digit;
	int	count;

	count = 0;
    digit = stack_a()->array[0] % 10;
	while (stack_a()->size > 0)
	{
		if (digit == 0)
		{
			push_b(stack_a()->array[count]);
			stack_a()->size--;
		}
		else
		{
			rotate_a(stack_a()->array[count]);
			stack_a()->size++;
		}
		count++;
	}
    digit = sa.array[count];
    while (sa.size > 0)
    {
        digit = (digit / 10) % 10;
        if (digit == 0)
        {
            sb = push_b(&sa, &sb, sa.array[count]);
            sa.size--;
        }
        else
        {
            sa = rotate_a(&sa, sa.array[count]);
            sa.size++;
        }
    }
    while (sb.size > 0)
    {
        push_a(&sb, &sa, sa.array[count]);
        sb.size--;
    }
    *a = sa;
    *b = sb;
}