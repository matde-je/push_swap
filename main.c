/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 14:55:09 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int	i;
	int	temp[argc - 1];

	i = 0;
	while (++i != argc)
	{
		temp[i - 1] = ft_atoi(argv[i]);
	}
	if (a.size == 3)
		numbers_3(&a, &b);
	else if (a.size == 5)
		numbers_5(&a, &b);
	free(a.array);
	free(b.array);
}
