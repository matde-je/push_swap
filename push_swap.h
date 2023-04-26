/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:39:15 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 14:50:48 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct stack
{
	int	*array;
	int	size;
}t_stack;

void	bit_shift();
void	movements();
int	my_atoi(char *str);
void	push_b(int value);
void	push_a(int value);
void	numbers_3();
void	numbers_5();
void	rotate_a(int value);
void	negative_numbers();
t_stack	*stack_a(void);
t_stack *stack_b(void);
t_stack *stack_temp(void);

#endif
