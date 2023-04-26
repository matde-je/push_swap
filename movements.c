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
			rotate_a();
			stack_a()->size++;
		}
		count++;
	}
    digit = stack_a()->array[count];
    while (stack_a()->size > 0)
    {
        digit = (digit / 10) % 10;
        if (digit == 0)
        {
            push_b(stack_a()->array[count]);
            stack_a()->size--;
        }
        else
        {
            rotate_a();
            stack_a()->size++;
        }
    }
    push_a();
}
