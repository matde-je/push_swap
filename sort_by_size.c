/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 15:18:23 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	numbers_3(void)
{
	if (stack_a()->array[0] == 2 && stack_a()->array[1] == 1
		&& stack_a()->array[2] == 3)
		swap_a();
	if (stack_a()->array[0] == 3 && stack_a()->array[1] == 2
		&& stack_a()->array[2] == 1)
	{
		swap_a();
		r_rotate_a();
	}
	if (stack_a()->array[0] == 3 && stack_a()->array[1] == 1
		&& stack_a()->array[2] == 2)
		rotate_a();
	if (stack_a()->array[0] == 1 && stack_a()->array[1] == 3
		&& stack_a()->array[2] == 2)
	{
		swap_a();
		rotate_a();
	}
	if (stack_a()->array[0] == 2 && stack_a()->array[1] == 3
		&& stack_a()->array[2] == 1)
		r_rotate_a();
}

void	numbers_3_5(void)
{
	if (stack_a()->array[0] == 4 && stack_a()->array[1] == 3
		&& stack_a()->array[2] == 5)
		swap_a();
	if (stack_a()->array[0] == 5 && stack_a()->array[1] == 4
		&& stack_a()->array[2] == 3)
	{
		swap_a();
		r_rotate_a();
	}
	if (stack_a()->array[0] == 5 && stack_a()->array[1] == 3
		&& stack_a()->array[2] == 4)
		rotate_a();
	if (stack_a()->array[0] == 3 && stack_a()->array[1] == 5
		&& stack_a()->array[2] == 4)
	{
		swap_a();
		rotate_a();
	}
	if (stack_a()->array[0] == 4 && stack_a()->array[1] == 5
		&& stack_a()->array[2] == 3)
		r_rotate_a();
}

void	numbers_5(void)
{
	int	count;

	count = 0;
	while (count <= stack_a()->size)
	{
		if (stack_a()->array[0] == 1 || stack_a()->array[0] == 2)
			push_b();
		else
			rotate_a();
		count++;
	}
	if (stack_b()->array[0] == 1)
		swap_b();
	numbers_3_5();
	if (stack_b()->size > 0)
	{
		push_a();
		push_a();
	}
}

void	check_size(void)
{
	if (stack_a()->size == 2)
		rotate_a();
	else if (stack_a()->size == 3)
		numbers_3();
	else if (stack_a()->size == 5)
		numbers_5();
	else
		radix();
}
