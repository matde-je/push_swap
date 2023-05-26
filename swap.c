/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c			  	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:10 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 12:41:41 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(void)
{
	int	temp;

	temp = stack_a()->array[0];
	stack_a()->array[0] = stack_a()->array[1];
	stack_a()->array[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(void)
{
	int	temp;

	temp = stack_b()->array[0];
	stack_b()->array[0] = stack_b()->array[1];
	stack_b()->array[1] = temp;
	write(1, "sb\n", 3);
}
