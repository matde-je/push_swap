/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:59 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 15:39:56 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(void)
{
	int	temp;
	int	counter;

	temp = stack_a()->array[0];
	counter = 1;
	while (counter < stack_a()->size)
	{
		stack_a()->array[counter - 1] = stack_a()->array[counter];
		counter++;
	}
	stack_a()->array[counter - 1] = temp;
	write(1, "ra\n", 3);
}

void	r_rotate_a(void)
{
	int	temp;
	int	len;

	temp = stack_a()->array[stack_a()->size - 1];
	len = stack_a()->size - 1;
	while (len > 0)
	{
		stack_a()->array[len] = stack_a()->array[len - 1];
		len--;
	}
	stack_a()->array[0] = temp;
	write(1, "rra\n", 4);
}
