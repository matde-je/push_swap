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
    t_stack	b;
    t_stack a;
	int	size_a;
	int	count;

	size_a = a.size;
	count = 0;
    digit = a.array[0] % 10;
	while (size_a > 0)
	{
		if (digit == 0)
		{
			push_b(a.array[count]);
			a.size--;
		}
		else
		{
			rotate_a(a.array[count]);
			a.size++;
		}
		size_a--;
		count++;
	}
    digit = a.array[count];
    while (a.size > 0)
    {
        digit = (digit / 10) % 10;
        if (digit == 0)
        {
            push_b(a.array[count]);
            a.size--;
        }
        else
        {
            rotate_a(a.array[count]);
            a.size++;
        }
    }
    while (b.size > 0)
    {
        push_a(a.array[count]);
        b.size--;
    }
}