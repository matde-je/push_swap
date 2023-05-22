/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 15:18:23 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexation(void)
{
	int	count;

	count = 0;
	while (stack_temp()->size > 0)
	{
		stack_a()->size++;
		stack_a()->array[count] = stack_temp()->array[count];
		count++;
		stack_temp()->size--;
	}
}

void	numbers_3_help(void)
{
	if (stack_a()->array[0] <= stack_a()->array[1]
		&& stack_a()->array[1] >= stack_a()->array[2]
		&& stack_a()->array[0] <= stack_a()->array[2])
	{
		swap_a();
		rotate_a();
	}
	if (stack_a()->array[0] <= stack_a()->array[1]
		&& stack_a()->array[1] >= stack_a()->array[2]
		&& stack_a()->array[0] >= stack_a()->array[2])
		r_rotate_a();
}

void	numbers_3(void)
{
	if (stack_a()->array[0] >= stack_a()->array[1] 
		&& stack_a()->array[1] <= stack_a()->array[2]
		&& stack_a()->array[0] <= stack_a()->array[2])
		swap_a();
	if (stack_a()->array[0] >= stack_a()->array[1]
		&& stack_a()->array[1] >= stack_a()->array[2]
		&& stack_a()->array[0] >= stack_a()->array[2])
	{
		swap_a();
		r_rotate_a();
	}
	if (stack_a()->array[0] >= stack_a()->array[1]
		&& stack_a()->array[1] <= stack_a()->array[2]
		&& stack_a()->array[0] >= stack_a()->array[2])
		rotate_a();
	else
		numbers_3_help();
}

void	numbers_5(void)
{
	push_b();
	push_b();
	numbers_3();
	while (stack_a()->size > 0)
	{
		if (stack_b()->array[stack_a()->size -1]
			< stack_a()->array[stack_a()->size -1])
			push_a();
		stack_a()->size--;
	}
}
