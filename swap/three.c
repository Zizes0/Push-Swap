/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:39:13 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/26 18:10:56 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_array3(int array[])
{
	if (array[1] < array[0] && array[0] < array[2])
		return (1);
	else if (array[0] > array[1] && array[1] > array[2])
		return (2);
	else if (array[1] < array[2] && array[0] > array[2])
		return (3);
	else if (array[1] > array[2] && array[0] < array[2])
		return (4);
	else if (array[1] > array[0] && array[0] > array[2])
		return (5);
	return (0);
}

void	s1(t_stack *a, int number)
{
	if (number == 1)
		sa(a);
	else if (number == 2)
	{
		sa(a);
		rra(a);
	}
	else if (number == 3)
		ra(a);
	else if (number == 4)
	{
		sa(a);
		ra(a);
	}
	else if (number == 5)
		rra(a);
}

void	push_swap_three(t_stack *a)
{
	int		number;
	int		i;
	int		*arr;
	t_stack	b;

	b = *a;
	i = 0;
	arr = malloc(sizeof(int) * 3);
	if (!arr)
		return ;
	while (i < 3)
	{
		arr[i] = (b)->val;
		b = b->next;
		i++;
	}
	number = check_array3(arr);
	s1(a, number);
	free(arr);
}
