/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:42:23 by matde-je          #+#    #+#             */
/*   Updated: 2023/05/10 17:03:31 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initializing(int argc)
{
	stack_a()->array = malloc(sizeof(int) * argc);
	stack_b()->array = malloc(sizeof(int) * argc);
	stack_temp()->array = malloc(sizeof(int) * argc);
	stack_a()->size = 0;
	stack_b()->size = 0;
	stack_temp()->size = 0;
}

// void	print_(void)
// {
// 	int	i;
// 	int	len;

// 	i = 0;
// 	len = stack_a()->size;
// 	while (--len > -1)
// 	{
// 		printf("%i\n", stack_a()->array[i]);
// 		i++;
// 	}
// }

int	main(int argc, char **argv)
{
	initializing(argc);
	if (check_args(argc, argv) == 1)
		return (0);
	atoi_help(argc, argv);
	if (argv_sorted() == 1)
		return (0);
	check_size();
	free(stack_a()->array);
	free(stack_temp()->array);
	stack_a()->size = 0;
	stack_temp()->size = 0;
}
