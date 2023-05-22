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
	int	len;

	len = stack_a()->size;
	stack_temp()->array[0] = stack_a()->array[len - 1];
	while (--len >= 0)
	{
		if (len > 0)
			stack_a()->array[len] = stack_a()->array[len - 1];
		else
			stack_a()->array[0] = stack_temp()->array[0];
	}
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
}

void	swap_a(void)
{
	int	temp;

	temp = stack_a()->array[0];
	stack_a()->array[0] = stack_a()->array[1];
	stack_a()->array[1] = temp;
}
