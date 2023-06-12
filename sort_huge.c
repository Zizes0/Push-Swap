/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_huge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:10:32 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:03:16 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	qisma(t_stack **stack_a)
{
	int	r;
	int	l;

	l = ft_lstsize(*stack_a);
	if (l >= 50)
		r = l / 3;
	else if (l >= 100)
		r = l / 8;
	else
		r = l / 15;
	return (r);
}

void	sorting_b(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		if ((*stack_b)->index == size && size >= 0)
		{
			push_a(stack_a, stack_b, 0);
			size--;
		}
		else if (indexing_max(*stack_b) <= size / 2)
			rotate_b(stack_b, 0);
		else
			rotate_reverse_b(stack_b, 0);
	}
}

void	sort_huge(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;

	i = 0;
	indexing_stack(stack_a);
	while (*stack_a)
	{
		j = qisma(stack_a);
		if ((*stack_a)->index <= i)
		{
			push_b(stack_a, stack_b, 0);
			i++;
		}
		else if ((*stack_a)->index <= i + j)
		{
			push_b(stack_a, stack_b, 0);
			rotate_b(stack_b, 0);
			i++;
		}
		else
			rotate_a(stack_a, 0);
	}
	sorting_b(stack_a, stack_b);
}
