/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:19:02 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:03:01 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_max(t_stack *stack)
{
	int	max;

	max = stack->num;
	while (stack)
	{
		if (max < stack->num)
			max = stack->num;
		stack = stack->next;
	}
	return (max);
}

int	indexing_max(t_stack *stack_b)
{
	int	max;
	int	index;

	max = check_max(stack_b);
	index = 0;
	while (stack_b)
	{
		if (max == stack_b->num)
			return (index);
		index++;
		stack_b = stack_b->next;
	}
	return (index);
}

t_stack	*ft_next_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		in;

	min = NULL;
	in = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (in == 0 || head->num < min->num))
			{
				min = head;
				in = 1;
			}
			head = head->next;
		}
	}
	return (min);
}
