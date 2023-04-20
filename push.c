/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:10 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 12:41:41 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(number)
{
    int i;

    i = number % 10;
    if (i == 0)
    {
        pb;
        len_stack_a--;
    }
    else
    {
        ra;
        len_stack_a++;
    }
    i = number;
    while (i)
    {
        i = (i / 10) % 10;
        while (len_stack_a > 0)
        {
            if (i == 0)
            {
                pb;
                len_stack_a--;
            }

            else
            {
                ra;
                len_stack_a++;
            }
        }
        while (len_stack_b > 0)
        {
            pa;
            len_stack_b--;
        }
        
    }
}
