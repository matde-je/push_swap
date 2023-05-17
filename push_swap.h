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

typedef struct stack
{
	int	*array;
	int	size;
}t_stack;

int	my_atoi(char *str);
void	push_b(void);
void	push_a(void);
void	numbers_3(void);
void	numbers_5(void);
void	rotate_a(void);
t_stack	*stack_a(void);
t_stack	*stack_b(void);
t_stack	*stack_temp(void);
void    get_max(void);
void	radix(void);

#endif