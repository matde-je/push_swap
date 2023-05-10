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
	int	count;

	count = 0;
	while (stack_a()->size > 0)
	{
		stack_a()->array[stack_a()->size - 1] = stack_a()->array[count];
		stack_a()->size--;
		count++;
	}
	write(1, "ra\n", 3);
}
