/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 15:18:23 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_(void)
{
	int	i;
	int	len;

	i = 0;
	len = stack_a()->size;
	while (--len > -1)
	{
		printf("%i\n", stack_a()->array[i]);
		i++;
	}
}

void	indexation(void)
{
	int	count;
	int	len;

	count = 0;
	len = stack_temp()->size;
	while (--len > -1)
	{
		stack_a()->size++;
		stack_a()->array[count] = stack_temp()->array[count];
		count++;
	}
	write(1, "index\n", 6);
	print_();
}
