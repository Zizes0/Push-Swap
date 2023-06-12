/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_less_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:56:01 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:05:21 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_move_check_min(t_stack **sta, int min_next)
{
	int		n;
	t_stack	*tmp;

	n = 0;
	tmp = *sta;
	while (tmp)
	{
		if (tmp->index == min_next)
			break ;
		n++;
		tmp = tmp->next;
	}
	return (n);
}

void	ft_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

int	get_next_min(t_stack **stack, int index)
{
	int		min;
	int		i;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	min = tmp->num;
	ft_index(*stack);
	while (tmp)
	{
		if ((min > tmp->num) && tmp->index != index)
		{
			i = tmp->index;
			min = tmp->num;
		}
		tmp = tmp->next;
	}
	return (i);
}
