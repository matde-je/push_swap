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
	stack_temp()->array[0] = stack_a()->array[stack_a()->size - 1];
	while (stack_a()->size > 0)
	{
		if (stack_a()->size > 1)
			stack_a()->array[stack_a()->size - 1] = stack_a()->array[stack_a()->size - 2];
		else
			stack_a()->array[0] = stack_temp()->array[0];
		stack_a()->size--;
	}
	write(1, "ra\n", 3);
}
