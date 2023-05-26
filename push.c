/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:10 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 12:21:59 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(void)
{
	int	count;

	count = stack_b()->size;
	while (0 < count)
	{
		stack_b()->array[count] = stack_b()->array[count - 1];
		count--;
	}
	stack_b()->size++;
	stack_b()->array[0] = stack_a()->array[0];
	count = 0;
	while (count < stack_a()->size - 1)
	{
		stack_a()->array[count] = stack_a()->array[count + 1];
		count++;
	}
	stack_a()->array[count] = 0;
	stack_a()->size--;
	write(1, "pb\n", 3);
}

void	push_a(void)
{
	int	count;

	count = stack_a()->size;
	while (0 < count)
	{
		stack_a()->array[count] = stack_a()->array[count - 1];
		count--;
	}
	stack_a()->size++;
	stack_a()->array[0] = stack_b()->array[0];
	count = 0;
	while (count < stack_b()->size - 1)
	{
		stack_b()->array[count] = stack_b()->array[count + 1];
		count++;
	}
	stack_b()->array[count] = 0;
	stack_b()->size--;
	write(1, "pa\n", 3);
}
