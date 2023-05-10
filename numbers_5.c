/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 13:44:41 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	numbers_5(void)
{
	push_b(stack_a()->array[stack_a()->size -1]);
	push_b(stack_a()->array[stack_a()->size -2]);
	numbers_3();
	while (stack_a()->size > 0)
	{
		if (stack_b()->array[stack_a()->size -1]
			< stack_a()->array[stack_a()->size -1])
			push_a();
		stack_a()->size--;
	}
}
