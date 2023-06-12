/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:01:53 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 03:31:33 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_a(t_stack **stack_a, int i)
{
	t_stack	*tmp;

	if (!(*stack_a))
		return ;
	else if ((*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	swap_b(t_stack **stack_b, int i)
{
	t_stack	*tmp;

	if (!(*stack_b))
		return ;
	else if ((*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	swap_s(t_stack **stack_a, t_stack **stack_b, int i)
{
	swap_a(stack_a, 1);
	swap_b(stack_b, 1);
	if (i == 0)
		write(1, "ss\n", 3);
}
