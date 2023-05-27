/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/27 12:22:18 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct stack
{
	int	*array;
	int	size;
}t_stack;

int		my_atoi(char *str);
void	push_b(void);
void	push_a(void);
void	numbers_3(void);
void	numbers_5(void);
void	rotate_a(void);
t_stack	*stack_a(void);
t_stack	*stack_b(void);
t_stack	*stack_temp(void);
void	index_(void);
void	radix(void);
void	atoi_help(int argc, char **argv);
void	check_size(void);
int		check_args(int argc, char **argv);
int		argv_sorted(void);
void	swap_a(void);
void	swap_b(void);
void	r_rotate_a(void);

#endif