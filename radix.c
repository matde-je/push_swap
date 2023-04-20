/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:41:50 by matde-je          #+#    #+#             */
/*   Updated: 2023/04/19 15:34:07 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max(int *arr, int n)
{
	int	i;
	int	max;

	max = arr[0];
	i = 1;
	while (i++ < n) 
	{
		if (arr[i] > max)
            max = arr[i];
	}
	return (max);
}

void count_sort(int *arr, int n, int exp) 
{
	int sorted[n];
	int i;
	int *count;

	i = 0;
	while (i++ < n)
		count[(arr[i] / exp) % 10]++;
	i = 1;
	while (i++ <= *count)//can i do this comparison???
		count[i] += count[i - 1];
	i = n - 1;
	while (i-- >= 0)
	{
		sorted[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	i = 0;
	while (i++ < n)
		arr[i] = sorted[i];
	}

void radix_sort(int arr[], int n) 
{
	int m;
	int exp;
	
	exp = 1;
	m = get_max(arr, n);
	while (m / exp > 0)
	{
		count_sort(arr, n, exp);
		exp *= 10;
	}	
}
