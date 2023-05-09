/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:34:48 by marvin            #+#    #+#             */
/*   Updated: 2023/04/27 12:26:19 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	a;

	return (&a);
}

t_stack	*stack_b(void)
{
	static t_stack	b;

	return (&b);
}

t_stack	*stack_temp(void)
{
	static t_stack	temp;

	return (&temp);
}

t_stack	*stack_temp2(void)
{
	static t_stack	temp2;

	return (&temp2);
}

t_stack	*stack_temp3(void)
{
	static t_stack	temp3;

	return (&temp3);
}