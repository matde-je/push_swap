/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:10 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 12:21:59 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(void)
{
	stack_a()->array[stack_a()->size + 1] = stack_b()->array[stack_b()->size -1];
	stack_b()->array[stack_b()->size -1] = '\0';
	stack_b()->size--;
	stack_a()->size++;
	write(1, "pa\n", 3);
}
