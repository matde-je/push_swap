/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:34:48 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 18:46:27 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack bit_shift(t_stack *a) 
{
    t_stack sa;
	int	count;
	t_stack binary_num;

    sa = *a;
	count = 0;
	while (count < sa.size)
	{
		while (sa.array[count] > 0)
		{
			binary_num.array[count] = sa.array[count] % 2;
			sa.array[count] /= 2;
		}
		count++;
	}
	sa = binary_num;
	*a = sa;
	return (*a);
}