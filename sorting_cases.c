/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 01:05:42 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/12 01:30:15 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_3_check(t_stack **stack)
{
	if (*stack == NULL)
		exit(0);
	if (ft_is_sort(stack) == 0)
		return ;
}

void	ft_3_sort(t_stack **stack)
{
	int	min;
	int	min_next;

	min = get_next_min(stack, -1);
	min_next = get_next_min(stack, min);
	if ((*stack)->index == min && (*stack)->next->index != min_next)
	{
		rotate_a(stack, 0);
		swap_a(stack, 0);
		rotate_reverse_a(stack, 0);
	}
	else if ((*stack)->index == min_next)
	{
		if ((*stack)->next->index != min)
			rotate_reverse_a(stack, 0);
		else
			swap_a(stack, 0);
	}
	else
	{
		rotate_a(stack, 0);
		if (ft_is_sort(stack) != 0)
			ft_3_sort(stack);
	}
}

void	ft_4_sort(t_stack **sta, t_stack **stb)
{
	int	min;
	int	n;

	min = get_next_min(sta, -1);
	n = nbr_move_check_min(sta, min);
	if (n == 1)
		swap_a(sta, 0);
	else if (n == 2)
	{
		rotate_a(sta, 0);
		rotate_a(sta, 0);
	}
	else if (n == 3)
		rotate_reverse_a(sta, 0);
	push_b(sta, stb, 0);
	ft_3_sort(sta);
	push_a(sta, stb, 0);
}

void	ft_5_sort(t_stack **sta, t_stack **stb)
{
	int	min;
	int	n;

	min = get_next_min(sta, -1);
	n = nbr_move_check_min(sta, min);
	if (n == 1)
		swap_a(sta, 0);
	else if (n == 2)
	{
		rotate_a(sta, 0);
		rotate_a(sta, 0);
	}
	else if (n == 3)
	{
		rotate_reverse_a(sta, 0);
		rotate_reverse_a(sta, 0);
	}
	else if (n == 4)
		rotate_reverse_a(sta, 0);
	push_b(sta, stb, 0);
	ft_4_sort(sta, stb);
	push_a(sta, stb, 0);
}
