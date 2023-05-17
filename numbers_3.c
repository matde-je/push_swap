/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_3.c                                        :+:      :+:    :+:   */
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
	if (stack_a()->array[1] > stack_a()->array[2]
		&& stack_a()->array[0] > stack_a()->array[2])
	{
		rotate_a();
		rotate_a();
	}
	if (stack_a()->array[1] < stack_a()->array[0]
		&& stack_a()->array[1] < stack_a()->array[2])
		rotate_a();
	else if (stack_a()->array[1] > stack_a()->array[0])
	{
		push_b();
		rotate_a();
		push_a();
	}
}
