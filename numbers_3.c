/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 15:54:31 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	numbers_3(void)
{
	if (stack_a()->array[1] > stack_a()->array[2]
		&& stack_a()->array[2] > stack_a()->array[2])
	{
		stack_a()->array[2] = stack_a()->array[0];
		stack_a()->array[0] = stack_a()->array[2];
	}
	if (stack_a()->array[1] < stack_a()->array[0]
		&& stack_a()->array[1] < stack_a()->array[2])
	{
		stack_a()->array[1] = stack_a()->array[2];
		stack_a()->array[2] = stack_a()->array[1];
	}
	else if (stack_a()->array[1] > stack_a()->array[0])
	{
		stack_a()->array[1] = stack_a()->array[0];
		stack_a()->array[0] = stack_a()->array[1];
	}
}
